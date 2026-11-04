extern char lbl_831C3370[];
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern unsigned int lbl_821C164C;
extern unsigned int uStack_4c;


undefined4 * fn_824E4A90(undefined4 *param_1,undefined4 *param_2)

{
  unsigned int uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [1];
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];

  param_1[1] = param_2;
  *param_1 = &lbl_821C164C;
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = *param_2;
  }
  else {
    uVar2 = 0;
  }
  param_1[2] = uVar2;
  fn_82520158("fxLensFlareVertexShader",auStack_50,0);
  fn_82520158("fxLensFlarePixelShader",&uStack_4c,0);
  uVar1 = fn_8251F720(auStack_50,0);
  uVar2 = fn_82631830();
  param_1[3] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(&uStack_4c,0);
  uVar2 = fn_82631488();
  param_1[4] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_82631BF8(lbl_831C3370);
  uStack_4c = 0x10;
  fn_826438C0(param_1[3],0,uVar1,&uStack_4c,0);
  fn_8262FEC8(uVar1);
  fn_82520158("fxLensFlareStarTexture",&uStack_4c,0);
  fn_82520158("fxLensFlareStarRaysTexture",auStack_50,0);
  fn_82520158("fxLensFlareRaysTexture",auStack_48,0);
  fn_82520158("fxLensFlareBlob132x32Texture",auStack_44,0);
  fn_82520158("fxLensFlareBlob232x32Texture",auStack_40,0);
  fn_82520158("fxLensFlareBlob332x32Texture",auStack_3c,0);
  fn_82520158("fxLensFlareBlob164x64Texture",auStack_38,0);
  fn_82520158("fxLensFlareBlob264x64Texture",auStack_34,0);
  fn_82520158("fxLensFlareBlob364x64Texture",auStack_30,0);
  fn_82520158("fxLensFlareBlob196x96Texture",auStack_2c,0);
  fn_82520158("fxLensFlareBlob296x96Texture",auStack_28,0);
  fn_82520158("fxLensFlareBlob396x96Texture",auStack_24,0);
  uVar2 = fn_8251F720(&uStack_4c,0);
  param_1[5] = uVar2;
  uVar2 = fn_8251F720(auStack_50,0);
  param_1[6] = uVar2;
  uVar2 = fn_8251F720(auStack_48,0);
  param_1[7] = uVar2;
  uVar2 = fn_8251F720(auStack_44,0);
  param_1[8] = uVar2;
  uVar2 = fn_8251F720(auStack_40,0);
  param_1[9] = uVar2;
  uVar2 = fn_8251F720(auStack_3c,0);
  param_1[10] = uVar2;
  uVar2 = fn_8251F720(auStack_38,0);
  param_1[0xb] = uVar2;
  uVar2 = fn_8251F720(auStack_34,0);
  param_1[0xc] = uVar2;
  uVar2 = fn_8251F720(auStack_30,0);
  param_1[0xd] = uVar2;
  uVar2 = fn_8251F720(auStack_2c,0);
  param_1[0xe] = uVar2;
  uVar2 = fn_8251F720(auStack_28,0);
  param_1[0xf] = uVar2;
  uVar2 = fn_8251F720(auStack_24,0);
  param_1[0x10] = uVar2;
  return param_1;
}
