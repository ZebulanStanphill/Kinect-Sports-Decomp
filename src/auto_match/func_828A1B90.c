typedef struct { unsigned char b[8]; } B8;
typedef struct { unsigned char b[0x24]; } B24;
typedef struct { unsigned char b[0x10]; } B10;

typedef struct {
  B8 a;
  B24 b;
  B10 c;
} Out;

typedef struct {
  char pad[0x14];
  B8 a;
  B24 b;
  B10 c;
} In;

Out *fn_828A1B90(Out *out, char *p)
{
  In *s = *(In **)(p + 0x8c);
  out->b = s->b;
  out->c = s->c;
  out->a = s->a;
  return out;
}
