typedef struct Utf8Span_826EF920 {
  const char *data;
  unsigned int length;
} Utf8Span_826EF920;

extern unsigned char lbl_820094C8[];
extern int fn_826BD078(const char **cursor);
extern int fn_826BCD88(const unsigned char *table, unsigned short ch);

int fn_826EF920(Utf8Span_826EF920 *span)
{
  const char *cur;
  const char *end;
  int ch;

  cur = span->data;
  end = span->data + span->length;
  if (cur != end) {
    do {
      ch = fn_826BD078(&cur);
      if (ch == 0 || fn_826BCD88(lbl_820094C8, (unsigned short)ch) == 0) {
        return 0;
      }
    } while (cur < end);
  }
  return 1;
}
