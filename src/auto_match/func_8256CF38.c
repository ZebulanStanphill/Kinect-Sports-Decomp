extern int fn_82517978();
extern int fn_8256C5D0();
extern int fn_8256D710();
extern int fn_8259BB38();
extern unsigned char fn_827D9768();

typedef struct Ref_8256CF38 { unsigned int p; unsigned int rep; } Ref_8256CF38;
typedef struct E_8256CF38 { unsigned int a; unsigned int b; unsigned int c; } E_8256CF38;
typedef struct O_8256CF38 { char pad[4]; unsigned int head; char pad2[0x40]; E_8256CF38 *b48; E_8256CF38 *e4c; char pad3[0x8]; E_8256CF38 *b58; E_8256CF38 *e5c; } O_8256CF38;

void fn_8256CF38(O_8256CF38 *param_1,unsigned int *param_2)
{
  E_8256CF38 *puVar1;
  E_8256CF38 *puVar4;
  unsigned int uVar3;
  char *k;
  unsigned int key;
  Ref_8256CF38 r;

  key = *param_2;
  fn_8259BB38(&r,param_1,&key);
  uVar3 = r.p;
  if (uVar3 != param_1->head) {
    puVar1 = param_1->e4c;
    k = (char *)(uVar3 + 0x10);
    for (puVar4 = param_1->b48; puVar4 != puVar1; puVar4++) {
      if (fn_827D9768(puVar4->a + 0x1f8,k) != 0) break;
    }
    if (puVar4 != param_1->e4c) {
      r.p = 0;
      r.rep = 0;
      fn_82517978(&r,puVar4->a,puVar4->b,0);
      fn_8256C5D0(param_1,&r);
      fn_8256D710(&r,&param_1->b48,puVar4);
    }
    k = k + 0x18;
    puVar1 = param_1->e5c;
    for (puVar4 = param_1->b58; puVar4 != puVar1; puVar4++) {
      if (fn_827D9768(puVar4->a + 0x1f8,k) != 0) break;
    }
    if (puVar4 != param_1->e5c) {
      r.p = 0;
      r.rep = 0;
      fn_82517978(&r,puVar4->a,puVar4->b,0);
      fn_8256C5D0(param_1,&r);
      fn_8256D710(&r,&param_1->b58,puVar4);
    }
  }
}
