extern float lbl_82006848;
extern unsigned char *fn_82CE6150(unsigned char *, const void *, float);
unsigned char *fn_82D96AC0(unsigned char *out, char *source) {
  unsigned char temps[2];
  unsigned char result;
  float f = lbl_82006848;
  if (*fn_82CE6150(&temps[0],source+0x20,f)) {
    unsigned char *p = fn_82CE6150(&temps[1],source+0x60,f);
    if (*p) { result=1; goto done; }
  }
  result=0;
done:
  *out=result;
  return out;
}
