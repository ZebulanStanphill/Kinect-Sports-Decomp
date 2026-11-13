typedef struct String_8265F4B8 {
  char data[0x1c];
} String_8265F4B8;

extern char lbl_831E7A30[];
extern char lbl_82196582[];
extern void fn_82240D80(String_8265F4B8 *s);
extern unsigned char fn_8265F210(void *table, int a, int b, String_8265F4B8 *out);
extern void fn_82240378(String_8265F4B8 *dst, String_8265F4B8 *src);
extern void fn_82230110(String_8265F4B8 *dst, const char *text);
extern void fn_82230180(String_8265F4B8 *s);

String_8265F4B8 *fn_8265F4B8(String_8265F4B8 *result, int a, int b)
{
  String_8265F4B8 value;

  fn_82240D80(&value);
  if (fn_8265F210(lbl_831E7A30, a, b, &value)) {
    fn_82240378(result, &value);
    fn_82230180(&value);
    return result;
  }
  fn_82230110(result, lbl_82196582);
  fn_82230180(&value);
  return result;
}
