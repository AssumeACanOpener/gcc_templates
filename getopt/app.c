#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

const char* program_name;

void print_usage (FILE* stream, int exit_code)
{
  fprintf(stream, "Usage: %s options [ inputfile ... ]\n", program_name);
  fprintf(stream,
          "   -h  --help     Display this usage information.\n"
          "   -v  --verbose  Print verbose messages.\n");
  exit(exit_code);
}

int main(int argc, char** argv)
{
  int next_option;

  const char* const short_options = "h:v";

  const struct option long_options[] = {
    {"help",    0, NULL, 'h'},
    {"verbose", 0, NULL, 'v'},
    {NULL,      0, NULL, 0}
  };

  int verbose = 0;

  program_name = argv[0];

  do {
    next_option = getopt_long(argc, argv, short_options, long_options, NULL);
    switch(next_option)
    {
    case 'h':
      print_usage(stdout, 0);

    case 'v':
      verbose = 1;
      break;

    case '?':
      print_usage (stderr, 1);

    case -1:
      break;

    default:
      abort();
    }
  } while (next_option != -1);

  // Some nonsense to get it to not complain about verbose not being used.
  if (verbose) {
    fprintf(stderr, "Entering verbose mode.\n");
  }
}
