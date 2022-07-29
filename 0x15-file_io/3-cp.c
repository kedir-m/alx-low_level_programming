#include "main.h"
int copy_from_file_to_file(int file_from, int file_to, char *argv1, char *argv2)
{
	int Wc, Rc;
	char buf[1024];

	do
	{
		Rc = read(file_from, buf, 1024);
		if (Rc == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv1);
			return (-1);
		}
		if (Rc > 0)
		{
		Wc = write(file_to, buf, Rc);

		if (Wc == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv2);
			return (-2);
		}
		}
	}while(Rc > 0);

	return (0);
}
int main(int argc, char **argv)
{
	int fd1, fd2, cc;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cc = copy_from_file_to_file(fd1, fd2, argv[1], argv[2]);

	if (cc == -1)
		exit(98);
	if (cc == -2)
		exit(99);

	if (close(fd1) < 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd1);
		exit(100);
	}

	if (close(fd2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit(100);
	}

	return (0);
}
