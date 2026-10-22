typedef struct Ctx {
  char pad[0x5f4];
  char argc;
  char pad2[3];
  char **argv;
} Ctx;

extern int fn_82C10968(char *, void *);

int fn_82C10BA8(Ctx *c, void *name, char **out)
{
  int argc = c->argc;
  char **argv = c->argv;
  int found = 0;
  int hr = 0x50000e;
  unsigned int state;
  int i;

  if (argc == 0 || argv == 0) {
    hr = 0x805000bf;
    goto done;
  }
  *out = 0;
  state = 0;
  for (i = 1; i < argc; i++) {
    switch (state) {
    case 0:
      if (*argv[i] != '-') {
        hr = 0x805000be;
        goto done;
      }
      if (fn_82C10968(argv[i] + 1, name) == 0) {
        found = 1;
      }
      state = 1;
      break;
    case 1:
      if (found) {
        *out = argv[i];
        goto done;
      }
      state = 0;
      break;
    default:
      hr = 0x805000b3;
      goto done;
    }
  }
done:
  return hr;
}
