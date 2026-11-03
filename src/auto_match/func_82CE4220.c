extern unsigned KeTlsGetValue(unsigned);
extern int KeTlsSetValue(unsigned, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char *lbl_8323A960;
extern unsigned lbl_8323A964;

typedef struct Ob_82CE4220 { char pad[4]; unsigned short flag; short ref; } Ob_82CE4220;

void fn_82CE4220(char *p, int count, int stride)
{
  char *l = lbl_8323A960;
  int i;
  Ob_82CE4220 *o;
  if (*(int *)(l + 8) == 0 || KeTlsGetValue(lbl_8323A964) == 0x23df4554) {
    for (i = 0; i < count; i++) {
      o = *(Ob_82CE4220 **)p;
      if (o->flag != 0) o->ref = o->ref + 1;
      p += stride;
    }
  } else {
    if (KeTlsGetValue(lbl_8323A964) == 0x23df4554) {
      *(int *)(l + 0xc) = *(int *)(l + 0xc) + 1;
    } else {
      RtlEnterCriticalSection(l + 0x18);
      *(int *)(l + 0xc) = 1;
      KeTlsSetValue(lbl_8323A964, 0x23df4554);
    }
    for (i = 0; i < count; i++) {
      o = *(Ob_82CE4220 **)p;
      if (o->flag != 0) o->ref = o->ref + 1;
      p += stride;
    }
    *(int *)(l + 0xc) = *(int *)(l + 0xc) - 1;
    if (*(int *)(l + 0xc) <= 0) {
      KeTlsSetValue(lbl_8323A964, 0);
      RtlLeaveCriticalSection(l + 0x18);
    }
  }
}
