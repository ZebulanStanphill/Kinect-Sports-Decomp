#include <string.h>
typedef struct R_829DD980 { unsigned char valid; float a; float b; } R_829DD980;
extern float fn_829DD850(unsigned int *p);
extern float fn_829DD910(unsigned int *p);

void fn_829DD980(unsigned int *p, R_829DD980 *out)
{
  if (*p > 1) {
    out->valid = 1;
    out->a = fn_829DD850(p);
    out->b = fn_829DD910(p);
  } else {
    memset(out, 0, sizeof(*out));
  }
}
