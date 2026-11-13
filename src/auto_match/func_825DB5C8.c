extern char *pcRam8329e4d8;
extern char *pcRam8329e4dc;
extern char *pcRam8329e4e0;
extern char *pcRam8329e4e4;
extern char *pcRam8329e4ec;
extern char *pcRam8329e4f0;
extern char *pcRam8329e4f4;
extern char cRam8329e4f8;
extern int fn_825DB5B0();
extern int fn_825DB640();
extern int fn_825DB6A8();
extern int fn_825DB710();
extern int fn_82BA02A8();


void fn_825DB5C8(void)

{
  if (cRam8329e4f8 != '\0') {
    return;
  }
  pcRam8329e4e4 = fn_82BA02A8;
  pcRam8329e4d8 = fn_825DB5B0;
  pcRam8329e4dc = fn_825DB640;
  pcRam8329e4e0 = fn_82BA02A8;
  pcRam8329e4ec = fn_825DB6A8;
  pcRam8329e4f0 = fn_825DB710;
  pcRam8329e4f4 = fn_82BA02A8;
  cRam8329e4f8 = 1;
  return;
}
