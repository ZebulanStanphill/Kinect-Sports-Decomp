/* file_82937A60: functions fn_82937A60..fn_8293F5D8, grouped as one unit because they appear
 * to come from one original source file.
 *
 * The game was built with link-time code generation. Once a variadic function
 * that uses va_start has been compiled, every call to it reserves an outgoing
 * parameter area of 8*(n+8) bytes instead of 8*max(n,8), so its callers have a
 * larger frame and cannot tail-call. Those callers only match when the
 * variadic function is defined in the same unit, as it was in the original
 * file (see CONTRIBUTING.md).
 *
 * Compiled as one unit with /O1. Each function's declarations and
 * code sit between its @@ begin/end markers, in address order; km/try.py
 * replaces one region with a candidate to test it in place. */

typedef char *va_list;
typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { char pad[0x14]; unsigned int mod; } Operand_8293B8F8;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
typedef struct { unsigned int lo : 7; unsigned int f : 5; unsigned int rest : 20; } X;
typedef struct Sh_8293E2D0 { char pad0[0x48]; int f48; char pad1[0xc]; int f58; char pad2[4]; unsigned flags; char pad3[0xd0]; int f134; char pad4[4]; int f13c; } Sh_8293E2D0;
typedef struct Dc_8293E2D0 { char pad[0x50]; int f50; } Dc_8293E2D0;
#define NAN(x) ((x) != (x))
typedef struct { char pad0[0x34]; int f34; char pad1[0x28]; unsigned f60; char pad2[0xbc]; unsigned f120; unsigned f124; unsigned f128; char pad3[0xc]; void *f138; } Obj_8293DD48;

/* @@ end of shared declarations */

/* @@ begin fn_82937A60 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82937278(void *self, const char *fmt, va_list ap);

void fn_82937A60(void *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_82937278(self, fmt, ap);
}
/* @@ end fn_82937A60 */

/* @@ begin fn_82937AA8 */
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F68CC0();
extern unsigned int iStack00000014;
extern unsigned int lbl_82030B78;
extern unsigned int lbl_82030B7C;
extern unsigned int lbl_82030B80;
extern unsigned int lbl_82030B82;
extern unsigned int uStack_10c;
extern unsigned int uStack_118;
extern unsigned int uStack_120;


unsigned int fn_82937AA8(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  unsigned int uVar14;
  char cVar16;
  char *pcVar15;
  char cVar17;
  __int64 lVar18;
  char *pcVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  int iStack00000014;
  unsigned int uStack_120;
  char *pcStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_10c;
  char *pcStack_104;
  char *pcStack_fc;
  char *pcStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  char *pcStack_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char acStack_b0 [176];
  
  pcStack_11c = *(char **)(param_2 + 8);
  puVar10 = (unsigned int *)&lbl_82030B78;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  uStack_118 = 0;
  uStack_10c = 0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  uVar20 = 0;
  bVar7 = false;
  uStack_120 = 0x115;
  do {
    pcVar13 = (char *)*puVar10;
    cVar17 = *pcVar13;
    pcVar11 = pcStack_11c;
    pcVar19 = pcVar13;
    cVar16 = *pcStack_11c;
    while (cVar16 != '\0') {
      if ((cVar16 == '_') && (cVar17 == '\0')) {
        bVar2 = true;
        goto LAB_82937b78;
      }
      if (cVar16 != cVar17) {
        bVar2 = false;
        goto LAB_82937b78;
      }
      pcVar11 = pcVar11 + 1;
      pcVar19 = pcVar19 + 1;
      cVar17 = *pcVar19;
      cVar16 = *pcVar11;
    }
    bVar2 = cVar17 == '\0';
LAB_82937b78:
    pcVar11 = pcVar13;
    if (bVar2) goto LAB_82937b98;
    uVar20 = uVar20 + 1;
    puVar10 = puVar10 + 4;
  } while (uVar20 < 0x80);
LAB_82937bd4:
  if (uVar20 == 0x80) {
    return 0x115;
  }
  iVar9 = *(int *)(param_1 + 0x40);
  uVar14 = (unsigned int)*(unsigned short *)(&lbl_82030B80 + (uVar20 * 8 + iVar9) * 2);
  if (uVar14 == 0xffff) {
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar14 = (unsigned int)*(unsigned short *)(&lbl_82030B82 + uVar20 * 0x10);
      goto LAB_82937c1c;
    }
LAB_82937f24:
    if (uVar14 - 0xfff7 < 9) {
      if (uVar14 == 0xfff7) {
        uStack_120 = 0x10f;
      }
      else if (uVar14 == 0xfff8) {
        uStack_120 = 0x10e;
      }
      else if (uVar14 == 0xfff9) {
        uStack_120 = 0x10d;
      }
      else if (uVar14 == 0xfffa) {
        uStack_120 = 0x10c;
      }
      else if (uVar14 == 0xfffb) {
        uStack_120 = 0x10b;
      }
      else if (uVar14 == 0xfffc) {
        uStack_120 = 0x10a;
      }
      else if (uVar14 == 0xfffd) {
        uStack_120 = 0x108;
      }
      else {
        if (uVar14 != 0xfffe) {
          *(unsigned int *)(param_1 + 0x3c) = 0x7e7;
          return 0x115;
        }
        uStack_120 = 0x109;
      }
    }
  }
  else {
LAB_82937c1c:
    if (0xfff6 < uVar14) goto LAB_82937f24;
    if (uVar14 == 0xfff6) {
      uStack_120 = 0x110;
    }
    else if (uVar14 < 6) {
      if (uVar14 == 5) {
        uStack_120 = 0x107;
      }
      else if (uVar14 == 0) {
        uStack_120 = 0x102;
      }
      else if (uVar14 == 1) {
        uStack_120 = 0x103;
      }
      else if (uVar14 < 3) {
        uStack_120 = 0x104;
      }
      else if (uVar14 == 3) {
        uStack_120 = 0x105;
      }
      else if (uVar14 < 5) {
        uStack_120 = 0x106;
      }
    }
    else if (uVar14 == 0xffe8) {
      uStack_120 = 0x114;
    }
    else if (uVar14 == 0xffe9) {
      uStack_120 = 0x113;
    }
    else if (uVar14 == 0xffea) {
      uStack_120 = 0x112;
    }
    else if (uVar14 == 0xffeb) {
      uStack_120 = 0x111;
    }
  }
  uVar20 = *(unsigned int *)(&lbl_82030B7C + uVar20 * 0x10);
  uVar14 = uVar20 >> 0x13 & 0x1ff;
  if (((0x102 < uStack_120) && (uStack_120 < 0x108)) && (uVar14 != 0xf8)) {
    bVar4 = true;
  }
  if (iVar9 == 1) {
    if (uVar14 != 0xf8) goto LAB_82937cdc;
    bVar5 = true;
  }
  if (uVar14 == 0xf8) {
    bVar3 = true;
  }
LAB_82937cdc:
  if ((iVar9 == 1) && (uVar14 == 0xf8)) {
    bVar6 = true;
  }
  if ((iVar9 == 0) && (uVar14 == 0xf8)) {
    bVar7 = true;
  }
  *(unsigned int *)(param_1 + 0x3c) = 0x7e8;
  lVar18 = (__int64)*pcStack_11c;
  if (lVar18 != 0) {
    pcStack_c4 = "quadid";
    pcStack_c8 = "barycentric";
    pcStack_cc = "index";
    pcStack_d0 = "Pixel shaders can\'t declare position0 as an input interpolator.";
    pcStack_dc = "sample";
    pcStack_e0 = "depth";
    pcStack_d4 = "cube";
    pcStack_f4 = "binormal";
    pcStack_fc = "psize";
    uVar8 = 0;
    pcStack_e4 = "fog";
    pcStack_e8 = "color";
    pcStack_d8 = "positiont is not a valid semantic for Final GPU microcode.";
    pcStack_ec = "positiont";
    pcStack_f0 = "tessfactor";
    pcStack_f8 = "tangent";
    pcVar11 = pcStack_11c;
    iStack00000014 = param_1;
    pcStack_104 = pcStack_11c;
    do {
      pcVar19 = pcVar11;
      if ((int)lVar18 != 0) {
        do {
          if ((int)lVar18 == 0x5f) break;
          pcVar19 = pcVar19 + 1;
          lVar18 = (__int64)*pcVar19;
          pcStack_11c = pcVar19;
        } while (lVar18 != 0);
      }
      uVar21 = (int)pcVar19 - (int)pcStack_104;
      if (0xf < uVar21) {
        return 0x115;
      }
      fn_82F68CC0(acStack_b0,pcStack_104,uVar21);
      acStack_b0[uVar21] = '\0';
      if ((int)lVar18 != 0) {
        pcVar19 = pcVar19 + 1;
        pcStack_11c = pcVar19;
      }
      pcVar11 = pcVar19;
      if (bVar4) {
        pcVar12 = acStack_b0;
        pcVar13 = "sat";
        do {
          cVar17 = *pcVar12;
          cVar16 = *pcVar13;
          if (cVar17 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        } while (cVar17 == cVar16);
        if (cVar17 != cVar16) goto LAB_82937fac;
        bVar4 = false;
        uStack_118 = uStack_118 | 0x100000;
      }
      else {
LAB_82937fac:
        if (bVar5) {
          pcVar12 = acStack_b0;
          pcVar13 = "centroid";
          do {
            cVar17 = *pcVar12;
            cVar16 = *pcVar13;
            if (cVar17 == '\0') break;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar17 == cVar16);
          if (cVar17 == cVar16) {
            bVar5 = false;
            uStack_118 = uStack_118 | 0x400000;
          }
          else {
            pcVar12 = acStack_b0;
            pcVar13 = "nointerpolation";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 != cVar16) goto LAB_82938040;
            bVar5 = false;
            uStack_118 = uStack_118 | 0x800000;
          }
        }
        else {
LAB_82938040:
          uStack_10c = uVar8;
          if (bVar3) {
            uVar21 = 0;
            pcVar12 = acStack_b0;
            pcVar13 = "2d";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 == cVar16) {
              uVar21 = 0x10000000;
            }
            else {
              pcVar12 = acStack_b0;
              pcVar13 = pcStack_d4;
              do {
                cVar17 = *pcVar12;
                cVar16 = *pcVar13;
                if (cVar17 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar17 == cVar16);
              if (cVar17 == cVar16) {
                uVar21 = 0x18000000;
              }
              else {
                pcVar12 = acStack_b0;
                pcVar13 = "volume";
                do {
                  cVar17 = *pcVar12;
                  cVar16 = *pcVar13;
                  if (cVar17 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (cVar17 == cVar16);
                if (cVar17 == cVar16) {
                  uVar21 = 0x20000000;
                }
              }
            }
            uStack_10c = uVar21 | uVar8;
            bVar3 = false;
            if (uVar21 != 0) {
              bVar6 = false;
              bVar7 = false;
              uVar8 = uStack_10c;
              goto LAB_829389e0;
            }
          }
          if (bVar6) {
            pcVar13 = acStack_b0;
            cVar17 = acStack_b0[0];
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A40(*pcVar13), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = fn_82F65B18(pcVar13);
            }
            if (0xf < uVar8) goto LAB_82938214;
            cVar17 = *pcVar13;
            pcVar12 = pcVar13;
            if (cVar17 != '\0') {
              *pcVar13 = '\0';
              pcVar12 = pcVar13 + 1;
            }
            cVar16 = *pcVar12;
            while ((cVar16 != '\0' && (iVar9 = fn_82F66A80(), iVar9 != 0))) {
              pcVar12 = pcVar12 + 1;
              cVar16 = *pcVar12;
            }
            pcVar11 = pcStack_11c;
            if (*pcVar12 != '\0') {
LAB_8293820c:
              *pcVar13 = cVar17;
              goto LAB_82938214;
            }
            pcVar15 = acStack_b0;
            pcVar12 = "position";
            do {
              cVar16 = *pcVar15;
              cVar1 = *pcVar12;
              if (cVar16 == '\0') break;
              pcVar15 = pcVar15 + 1;
              pcVar12 = pcVar12 + 1;
            } while (cVar16 == cVar1);
            if (cVar16 == cVar1) {
              uVar21 = 0;
              pcVar12 = pcStack_d0;
              if (uVar8 == 0) {
LAB_82938204:
                fn_82937A60(iStack00000014,pcVar12);
                goto LAB_8293820c;
              }
            }
            else {
              pcVar15 = acStack_b0;
              pcVar12 = "blendweight";
              do {
                cVar16 = *pcVar15;
                cVar1 = *pcVar12;
                if (cVar16 == '\0') break;
                pcVar15 = pcVar15 + 1;
                pcVar12 = pcVar12 + 1;
              } while (cVar16 == cVar1);
              if (cVar16 == cVar1) {
                uVar21 = 1;
              }
              else {
                pcVar15 = acStack_b0;
                pcVar12 = "blendindices";
                do {
                  cVar16 = *pcVar15;
                  cVar1 = *pcVar12;
                  if (cVar16 == '\0') break;
                  pcVar15 = pcVar15 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (cVar16 == cVar1);
                if (cVar16 == cVar1) {
                  uVar21 = 2;
                }
                else {
                  pcVar15 = acStack_b0;
                  pcVar12 = "normal";
                  do {
                    cVar16 = *pcVar15;
                    cVar1 = *pcVar12;
                    if (cVar16 == '\0') break;
                    pcVar15 = pcVar15 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar16 == cVar1);
                  if (cVar16 == cVar1) {
                    uVar21 = 3;
                  }
                  else {
                    pcVar15 = acStack_b0;
                    pcVar12 = pcStack_fc;
                    do {
                      cVar16 = *pcVar15;
                      cVar1 = *pcVar12;
                      if (cVar16 == '\0') break;
                      pcVar15 = pcVar15 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (cVar16 == cVar1);
                    if (cVar16 == cVar1) {
                      uVar21 = 4;
                    }
                    else {
                      pcVar15 = acStack_b0;
                      pcVar12 = "texcoord";
                      do {
                        cVar16 = *pcVar15;
                        cVar1 = *pcVar12;
                        if (cVar16 == '\0') break;
                        pcVar15 = pcVar15 + 1;
                        pcVar12 = pcVar12 + 1;
                      } while (cVar16 == cVar1);
                      if (cVar16 == cVar1) {
                        uVar21 = 5;
                      }
                      else {
                        pcVar15 = acStack_b0;
                        pcVar12 = pcStack_f8;
                        do {
                          cVar16 = *pcVar15;
                          cVar1 = *pcVar12;
                          if (cVar16 == '\0') break;
                          pcVar15 = pcVar15 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (cVar16 == cVar1);
                        if (cVar16 == cVar1) {
                          uVar21 = 6;
                        }
                        else {
                          pcVar15 = acStack_b0;
                          pcVar12 = pcStack_f4;
                          do {
                            cVar16 = *pcVar15;
                            cVar1 = *pcVar12;
                            if (cVar16 == '\0') break;
                            pcVar15 = pcVar15 + 1;
                            pcVar12 = pcVar12 + 1;
                          } while (cVar16 == cVar1);
                          if (cVar16 == cVar1) {
                            uVar21 = 7;
                          }
                          else {
                            pcVar15 = acStack_b0;
                            pcVar12 = pcStack_f0;
                            do {
                              cVar16 = *pcVar15;
                              cVar1 = *pcVar12;
                              if (cVar16 == '\0') break;
                              pcVar15 = pcVar15 + 1;
                              pcVar12 = pcVar12 + 1;
                            } while (cVar16 == cVar1);
                            if (cVar16 == cVar1) {
                              uVar21 = 8;
                            }
                            else {
                              pcVar15 = acStack_b0;
                              pcVar12 = pcStack_ec;
                              do {
                                cVar16 = *pcVar15;
                                cVar1 = *pcVar12;
                                if (cVar16 == '\0') break;
                                pcVar15 = pcVar15 + 1;
                                pcVar12 = pcVar12 + 1;
                              } while (cVar16 == cVar1);
                              pcVar12 = pcStack_d8;
                              if (cVar16 == cVar1) goto LAB_82938204;
                              pcVar15 = acStack_b0;
                              pcVar12 = pcStack_e8;
                              do {
                                cVar16 = *pcVar15;
                                cVar1 = *pcVar12;
                                if (cVar16 == '\0') break;
                                pcVar15 = pcVar15 + 1;
                                pcVar12 = pcVar12 + 1;
                              } while (cVar16 == cVar1);
                              if (cVar16 == cVar1) {
                                uVar21 = 10;
                              }
                              else {
                                pcVar15 = acStack_b0;
                                pcVar12 = pcStack_e4;
                                do {
                                  cVar16 = *pcVar15;
                                  cVar1 = *pcVar12;
                                  if (cVar16 == '\0') break;
                                  pcVar15 = pcVar15 + 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (cVar16 == cVar1);
                                if (cVar16 == cVar1) {
                                  uVar21 = 0xb;
                                }
                                else {
                                  pcVar15 = acStack_b0;
                                  pcVar12 = pcStack_e0;
                                  do {
                                    cVar16 = *pcVar15;
                                    cVar1 = *pcVar12;
                                    if (cVar16 == '\0') break;
                                    pcVar15 = pcVar15 + 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (cVar16 == cVar1);
                                  if (cVar16 == cVar1) {
                                    uVar21 = 0xc;
                                  }
                                  else {
                                    pcVar15 = acStack_b0;
                                    pcVar12 = pcStack_dc;
                                    do {
                                      cVar16 = *pcVar15;
                                      cVar1 = *pcVar12;
                                      if (cVar16 == '\0') break;
                                      pcVar15 = pcVar15 + 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (cVar16 == cVar1);
                                    if (cVar16 != cVar1) goto LAB_8293820c;
                                    uVar21 = 0xd;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar6 = false;
            uStack_10c = (uVar8 & 0xf) << 0x10 | uVar21 | uStack_10c;
          }
          else {
LAB_82938214:
            if (!bVar7) {
              return 0x115;
            }
            pcVar13 = acStack_b0;
            cVar17 = acStack_b0[0];
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A40(*pcVar13), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = fn_82F65B18(pcVar13);
            }
            if (0xf < uVar8) {
              return 0x115;
            }
            if (*pcVar13 != '\0') {
              *pcVar13 = '\0';
              pcVar13 = pcVar13 + 1;
            }
            cVar17 = *pcVar13;
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A80(), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 != '\0') {
              return 0x115;
            }
            pcVar12 = acStack_b0;
            pcVar13 = "position";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 == cVar16) {
              uStack_10c = 0;
            }
            else {
              pcVar12 = acStack_b0;
              pcVar13 = "blendweight";
              do {
                cVar17 = *pcVar12;
                cVar16 = *pcVar13;
                if (cVar17 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar17 == cVar16);
              if (cVar17 == cVar16) {
                uStack_10c = 1;
              }
              else {
                pcVar12 = acStack_b0;
                pcVar13 = "blendindices";
                do {
                  cVar17 = *pcVar12;
                  cVar16 = *pcVar13;
                  if (cVar17 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (cVar17 == cVar16);
                if (cVar17 == cVar16) {
                  uStack_10c = 2;
                }
                else {
                  pcVar12 = acStack_b0;
                  pcVar13 = "normal";
                  do {
                    cVar17 = *pcVar12;
                    cVar16 = *pcVar13;
                    if (cVar17 == '\0') break;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar17 == cVar16);
                  if (cVar17 == cVar16) {
                    uStack_10c = 3;
                  }
                  else {
                    pcVar12 = acStack_b0;
                    pcVar13 = pcStack_fc;
                    do {
                      cVar17 = *pcVar12;
                      cVar16 = *pcVar13;
                      if (cVar17 == '\0') break;
                      pcVar12 = pcVar12 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (cVar17 == cVar16);
                    if (cVar17 == cVar16) {
                      uStack_10c = 4;
                    }
                    else {
                      pcVar12 = acStack_b0;
                      pcVar13 = "texcoord";
                      do {
                        cVar17 = *pcVar12;
                        cVar16 = *pcVar13;
                        if (cVar17 == '\0') break;
                        pcVar12 = pcVar12 + 1;
                        pcVar13 = pcVar13 + 1;
                      } while (cVar17 == cVar16);
                      if (cVar17 == cVar16) {
                        uStack_10c = 5;
                      }
                      else {
                        pcVar12 = acStack_b0;
                        pcVar13 = pcStack_f8;
                        do {
                          cVar17 = *pcVar12;
                          cVar16 = *pcVar13;
                          if (cVar17 == '\0') break;
                          pcVar12 = pcVar12 + 1;
                          pcVar13 = pcVar13 + 1;
                        } while (cVar17 == cVar16);
                        if (cVar17 == cVar16) {
                          uStack_10c = 6;
                        }
                        else {
                          pcVar12 = acStack_b0;
                          pcVar13 = pcStack_f4;
                          do {
                            cVar17 = *pcVar12;
                            cVar16 = *pcVar13;
                            if (cVar17 == '\0') break;
                            pcVar12 = pcVar12 + 1;
                            pcVar13 = pcVar13 + 1;
                          } while (cVar17 == cVar16);
                          if (cVar17 == cVar16) {
                            uStack_10c = 7;
                          }
                          else {
                            pcVar12 = acStack_b0;
                            pcVar13 = pcStack_f0;
                            do {
                              cVar17 = *pcVar12;
                              cVar16 = *pcVar13;
                              if (cVar17 == '\0') break;
                              pcVar12 = pcVar12 + 1;
                              pcVar13 = pcVar13 + 1;
                            } while (cVar17 == cVar16);
                            if (cVar17 == cVar16) {
                              uStack_10c = 8;
                            }
                            else {
                              pcVar12 = acStack_b0;
                              pcVar13 = pcStack_ec;
                              do {
                                cVar17 = *pcVar12;
                                cVar16 = *pcVar13;
                                if (cVar17 == '\0') break;
                                pcVar12 = pcVar12 + 1;
                                pcVar13 = pcVar13 + 1;
                              } while (cVar17 == cVar16);
                              if (cVar17 == cVar16) {
                                fn_82937A60(iStack00000014,
                                              "positiont is not a valid semantic for Final GPU microcode."
                                             );
                                return 0x115;
                              }
                              pcVar12 = acStack_b0;
                              pcVar13 = pcStack_e8;
                              do {
                                cVar17 = *pcVar12;
                                cVar16 = *pcVar13;
                                if (cVar17 == '\0') break;
                                pcVar12 = pcVar12 + 1;
                                pcVar13 = pcVar13 + 1;
                              } while (cVar17 == cVar16);
                              if (cVar17 == cVar16) {
                                uStack_10c = 10;
                              }
                              else {
                                pcVar12 = acStack_b0;
                                pcVar13 = pcStack_e4;
                                do {
                                  cVar17 = *pcVar12;
                                  cVar16 = *pcVar13;
                                  if (cVar17 == '\0') break;
                                  pcVar12 = pcVar12 + 1;
                                  pcVar13 = pcVar13 + 1;
                                } while (cVar17 == cVar16);
                                if (cVar17 == cVar16) {
                                  uStack_10c = 0xb;
                                }
                                else {
                                  pcVar12 = acStack_b0;
                                  pcVar13 = pcStack_e0;
                                  do {
                                    cVar17 = *pcVar12;
                                    cVar16 = *pcVar13;
                                    if (cVar17 == '\0') break;
                                    pcVar12 = pcVar12 + 1;
                                    pcVar13 = pcVar13 + 1;
                                  } while (cVar17 == cVar16);
                                  if (cVar17 == cVar16) {
                                    uStack_10c = 0xc;
                                  }
                                  else {
                                    pcVar12 = acStack_b0;
                                    pcVar13 = pcStack_dc;
                                    do {
                                      cVar17 = *pcVar12;
                                      cVar16 = *pcVar13;
                                      if (cVar17 == '\0') break;
                                      pcVar12 = pcVar12 + 1;
                                      pcVar13 = pcVar13 + 1;
                                    } while (cVar17 == cVar16);
                                    if (cVar17 == cVar16) {
                                      uStack_10c = 0xd;
                                    }
                                    else {
                                      pcVar12 = acStack_b0;
                                      pcVar13 = pcStack_cc;
                                      do {
                                        cVar17 = *pcVar12;
                                        cVar16 = *pcVar13;
                                        if (cVar17 == '\0') break;
                                        pcVar12 = pcVar12 + 1;
                                        pcVar13 = pcVar13 + 1;
                                      } while (cVar17 == cVar16);
                                      if (cVar17 == cVar16) {
                                        uStack_10c = 9;
                                      }
                                      else {
                                        pcVar12 = acStack_b0;
                                        pcVar13 = pcStack_c8;
                                        do {
                                          cVar17 = *pcVar12;
                                          cVar16 = *pcVar13;
                                          if (cVar17 == '\0') break;
                                          pcVar12 = pcVar12 + 1;
                                          pcVar13 = pcVar13 + 1;
                                        } while (cVar17 == cVar16);
                                        if (cVar17 == cVar16) {
                                          uStack_10c = 0xe;
                                        }
                                        else {
                                          pcVar12 = acStack_b0;
                                          pcVar13 = pcStack_c4;
                                          do {
                                            cVar17 = *pcVar12;
                                            cVar16 = *pcVar13;
                                            if (cVar17 == '\0') break;
                                            pcVar12 = pcVar12 + 1;
                                            pcVar13 = pcVar13 + 1;
                                          } while (cVar17 == cVar16);
                                          if (cVar17 != cVar16) {
                                            return 0x115;
                                          }
                                          uStack_10c = 0xf;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar7 = false;
            uStack_10c = (uVar8 & 0xf) << 0x10 | uStack_10c;
          }
          bVar3 = false;
          uVar8 = uStack_10c;
        }
      }
LAB_829389e0:
      lVar18 = (__int64)*pcVar11;
      param_1 = iStack00000014;
      pcStack_104 = pcVar19;
    } while (lVar18 != 0);
  }
  if ((!bVar7) && (!bVar6)) {
    *(unsigned int *)(param_1 + 0x6c) = uVar14;
    *(unsigned int *)(param_1 + 0x68) = uVar20 >> 0x1c;
    *(unsigned int *)(param_1 + 0x70) = uVar20 >> 0x11 & 3;
    *(unsigned int *)(param_1 + 0x74) = uStack_118;
    *(unsigned int *)(param_1 + 0x78) = uStack_10c;
    *(unsigned int *)(param_1 + 0x3c) = 0;
    return uStack_120;
  }
  return 0x115;
LAB_82937b98:
  do {
    cVar17 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar17 != '\0');
  pcStack_11c = pcStack_11c + (int)(pcVar11 + (-1 - (int)pcVar13));
  if (*pcStack_11c == '_') {
    pcStack_11c = pcStack_11c + 1;
  }
  goto LAB_82937bd4;
}
/* @@ end fn_82937AA8 */

/* @@ begin fn_82938A58 */
extern int fn_829301D0();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82938A58(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  unsigned __int64 uVar16;
  char *pcVar17;
  unsigned int uVar18;
  int *piVar19;
  unsigned int *puVar20;
  __int64 lVar21;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    return 1;
  }
  uVar12 = 0;
  uVar8 = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar20 = (unsigned int *)(param_2 + 0x3c);
    do {
      iVar7 = fn_82938A58(param_1,*puVar20);
      if (iVar7 == -1) {
        return 0xffffffffffffffff;
      }
      uVar8 = uVar8 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar8 < *(unsigned int *)(param_2 + 0x38));
  }
  piVar19 = (int *)(param_2 + 0x3c);
  iVar7 = *(int *)(*(int *)(param_2 + 0x3c) + 0x30);
  if (iVar7 != 2) {
    if (iVar7 != 1) {
      return 1;
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      piVar13 = piVar19;
      uVar8 = 1;
      do {
        piVar14 = piVar13;
        uVar10 = uVar8;
        if (uVar8 < *(unsigned int *)(param_2 + 0x38)) {
          do {
            piVar14 = piVar14 + 1;
            iVar7 = *piVar14;
            if (*(unsigned int *)(iVar7 + 8) < *(unsigned int *)(*piVar13 + 8)) {
              *piVar14 = *piVar13;
              *piVar13 = iVar7;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(unsigned int *)(param_2 + 0x38));
        }
        piVar13 = piVar13 + 1;
        bVar1 = uVar8 < *(unsigned int *)(param_2 + 0x38);
        uVar8 = uVar8 + 1;
      } while (bVar1);
    }
    *(unsigned int *)(param_2 + 0x14) = 0;
    uVar8 = 0;
    *(unsigned int *)(param_2 + 0x10) = 5;
    iVar7 = *piVar19;
    *(unsigned int *)(param_2 + 0x20) = 1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x38);
    *(unsigned int *)(param_2 + 8) = *(unsigned int *)(iVar7 + 8);
    *(unsigned int *)(param_2 + 0xc) = 0;
    *(unsigned int *)(param_2 + 0x18) = 1;
    *(unsigned int *)(param_2 + 0x1c) = 0;
    *(unsigned int *)(param_2 + 0x28) = 0;
    if (*(int *)(param_2 + 0x38) != 0) {
      do {
        if (*(int *)(*piVar19 + 0xc) != -1) {
          *(int *)(param_2 + 0xc) = *(int *)(*piVar19 + 0xc) + *(int *)(param_2 + 0xc);
        }
        iVar6 = *piVar19;
        *(int *)(param_2 + 0x1c) =
             *(int *)(iVar6 + 0x20) * *(int *)(iVar6 + 0x1c) * *(int *)(iVar6 + 0x18) +
             *(int *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x28) =
             *(int *)(*piVar19 + 0x28) * *(int *)(*piVar19 + 0x20) + *(int *)(param_2 + 0x28);
        if (*(int *)(iVar7 + 0x2c) == 0) {
          if (*(int *)(*piVar19 + 0x2c) != 0) goto LAB_82939098;
        }
        else if (*(int *)(*piVar19 + 0x2c) == 0) goto LAB_82939098;
        uVar8 = uVar8 + 1;
        piVar19 = piVar19 + 1;
      } while (uVar8 < *(unsigned int *)(param_2 + 0x38));
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      *(unsigned int *)(param_2 + 0xc) = 0xffffffff;
    }
    if (*(int *)(iVar7 + 0x2c) != 0) {
      uVar9 = fn_829301D0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0x28),4);
      lVar21 = 0;
      *(unsigned int *)(param_2 + 0x2c) = uVar9;
      if (*(int *)(param_2 + 0x38) != 0) {
        piVar19 = (int *)(param_2 + 0x38);
        do {
          iVar7 = piVar19[1];
          fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_2 + 0x2c) + lVar21,*(unsigned int *)(iVar7 + 0x2c),
                       (__int64)*(int *)(iVar7 + 0x28) * (__int64)*(int *)(iVar7 + 0x20));
          piVar19 = piVar19 + 1;
          uVar12 = uVar12 + 1;
          lVar21 = (__int64)*(int *)(*piVar19 + 0x28) * (__int64)*(int *)(*piVar19 + 0x20) +
                   lVar21;
        } while (uVar12 < *(unsigned int *)(param_2 + 0x38));
        return 1;
      }
      return 1;
    }
    return 1;
  }
  uVar8 = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar12 = 1;
    piVar13 = piVar19;
    do {
      piVar14 = piVar13;
      uVar10 = uVar12;
      if (uVar12 < *(unsigned int *)(param_2 + 0x38)) {
        do {
          piVar14 = piVar14 + 1;
          iVar7 = *piVar14;
          uVar4 = *(unsigned int *)(iVar7 + 0x34);
          uVar18 = *(unsigned int *)(*piVar13 + 0x34);
          if (uVar18 == uVar4) {
            uVar11 = 0xffffffff82031e44;
            goto LAB_829390a0;
          }
          if (uVar4 < uVar18) {
            *piVar14 = *piVar13;
            *piVar13 = iVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(unsigned int *)(param_2 + 0x38));
      }
      if (*(int *)(*piVar13 + 0x34) == 0) {
        puVar20 = *(unsigned int **)((uVar8 + 0xf) * 4 + param_2);
        if (puVar20 != (unsigned int *)0x0) {
          iVar7 = puVar20[1];
          uVar16 = (__int64)(int)puVar20[6] * (__int64)(int)puVar20[7];
          if ((iVar7 == 2) || (iVar7 == 1)) {
            if ((uVar16 & 3) == 0) {
              uVar16 = (uVar16 & 0xffffffff) >> 2;
            }
            else {
              uVar16 = ((uVar16 & 0xffffffff) >> 2) + 1;
            }
          }
          uVar8 = *(unsigned int *)(param_2 + 0x38);
          bVar1 = false;
          uVar12 = 1;
          if (uVar8 < 2) goto LAB_82938dc8;
          piVar13 = (int *)(param_2 + 0x40);
          goto LAB_82938be4;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      piVar13 = piVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar8 < *(unsigned int *)(param_2 + 0x38));
  }
  uVar11 = 0xffffffff82031e1c;
  goto LAB_829390a0;
LAB_82939098:
  uVar11 = 0xffffffff82031c10;
  goto LAB_829390a0;
LAB_82938be4:
  do {
    puVar5 = (unsigned int *)*piVar13;
    pcVar17 = (char *)*puVar5;
    pcVar15 = (char *)*puVar20;
    do {
      cVar2 = *pcVar17;
      cVar3 = *pcVar15;
      if (cVar2 == '\0') break;
      pcVar17 = pcVar17 + 1;
      pcVar15 = pcVar15 + 1;
    } while (cVar2 == cVar3);
    if (cVar2 != cVar3) {
      uVar11 = 0xffffffff82031d68;
      goto LAB_829390a0;
    }
    if ((((puVar5[0xc] != puVar20[0xc]) || (puVar5[0xe] != puVar20[0xe])) ||
        (puVar5[4] != puVar20[4])) ||
       (((puVar5[7] != puVar20[7] || (puVar5[6] != puVar20[6])) ||
        ((puVar5[1] != iVar7 || (puVar5[5] != puVar20[5])))))) {
LAB_82938ec0:
      uVar11 = 0xffffffff82031d38;
      goto LAB_829390a0;
    }
    iVar6 = puVar5[10];
    if (bVar1) {
      if (iVar6 != 0) {
        uVar11 = 0xffffffff82031dc8;
        goto LAB_829390a0;
      }
    }
    else if (iVar6 != puVar20[10]) {
      if (iVar6 != 0) goto LAB_82938ec0;
      bVar1 = true;
    }
    if ((bVar1) && (puVar5[0xb] != 0)) {
      uVar11 = 0xffffffff82031cf8;
      goto LAB_829390a0;
    }
    if (((puVar5[0xb] != 0) && (puVar20[0xb] == 0)) ||
       ((!bVar1 && ((puVar5[0xb] == 0 && (puVar20[0xb] != 0)))))) goto LAB_82939098;
    if ((puVar20[0xb] != 0) && (puVar5[0xd] != uVar12)) goto LAB_82938ed8;
    uVar10 = puVar20[3];
    if ((uVar10 == 0xffffffff) || ((unsigned __int64)uVar10 != (uVar16 & 0xffffffff))) {
      if (puVar5[3] != -1) {
LAB_82938ee4:
        uVar11 = 0xffffffff82031c58;
        goto LAB_829390a0;
      }
    }
    else {
      uVar4 = puVar5[3];
      if (((uVar4 == 0xffffffff) || (uVar4 < uVar10)) &&
         (uVar18 = uVar12 + 1, piVar14 = piVar13, uVar18 < uVar8)) {
        do {
          if (*(int *)(piVar14[1] + 0xc) != -1) goto LAB_82938ee4;
          uVar18 = uVar18 + 1;
          piVar14 = piVar14 + 1;
        } while (uVar18 < *(unsigned int *)(param_2 + 0x38));
      }
      if (uVar4 != 0xffffffff) {
        if (uVar10 < uVar4) goto LAB_82938ee4;
        if (puVar5[2] != uVar10 * uVar12 + puVar20[2]) {
          uVar11 = 0xffffffff82031d94;
          goto LAB_829390a0;
        }
      }
    }
    uVar12 = uVar12 + 1;
    piVar13 = piVar13 + 1;
  } while (uVar12 < *(unsigned int *)(param_2 + 0x38));
LAB_82938dc8:
  iVar7 = *(int *)((uVar8 + 0xe) * 4 + param_2);
  if ((puVar20[0xb] == 0) || (*(int *)(iVar7 + 0x34) + 1U == uVar8)) {
    *(unsigned int *)(param_2 + 0x14) = puVar20[5];
    *(unsigned int *)(param_2 + 0x10) = puVar20[4];
    iVar7 = *(int *)(iVar7 + 0x34);
    *(unsigned int *)(param_2 + 0x24) = 0;
    *(int *)(param_2 + 0x20) = iVar7 + 1;
    *(unsigned int *)(param_2 + 0x18) = puVar20[6];
    *(unsigned int *)(param_2 + 0x1c) = puVar20[7];
    *(unsigned int *)(param_2 + 0x28) = puVar20[10];
    if (puVar20[0xb] != 0) {
      lVar21 = (__int64)*(int *)(param_2 + 0x20) * (__int64)(int)puVar20[10];
      uVar11 = fn_829301D0(*(unsigned int *)(param_1 + 4),lVar21,4);
      *(int *)(param_2 + 0x2c) = (int)uVar11;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar11,0,lVar21);
    }
    *(unsigned int *)(param_2 + 0x2c) = 0;
    *(unsigned int *)(param_2 + 8) = puVar20[2];
    if (puVar20[3] != -1) {
      uVar8 = 0;
      *(unsigned int *)(param_2 + 0xc) = 0;
      if (*(int *)(param_2 + 0x38) == 0) {
        return 1;
      }
      do {
        iVar7 = *piVar19;
        if (*(int *)(iVar7 + 0xc) == -1) {
          return 1;
        }
        uVar8 = uVar8 + 1;
        piVar19 = piVar19 + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + *(int *)(iVar7 + 0xc);
      } while (uVar8 < *(unsigned int *)(param_2 + 0x38));
      return 1;
    }
    *(unsigned int *)(param_2 + 0xc) = 0xffffffff;
    return 1;
  }
LAB_82938ed8:
  uVar11 = 0xffffffff82031c98;
LAB_829390a0:
  fn_82937A60(param_1,0xffffffff82031bfc,uVar11);
  return 0xffffffffffffffff;
}
/* @@ end fn_82938A58 */

/* @@ begin fn_82939170 */
extern int fn_82F691F0();


unsigned __int64 fn_82939170(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x10) == 9) {
    pcVar3 = "defconst";
    pcVar4 = *(char **)(param_1 + 0x18);
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_2,0,0x30);
    }
  }
  return 0x118;
}
/* @@ end fn_82939170 */

/* @@ begin fn_82939CE8 */
extern unsigned int *auStack_4e0;
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_82F691F0();


unsigned __int64 fn_82939CE8(int param_1,unsigned __int64 *param_2)

{
  unsigned char auStack_4e0 [1248];
  
  *(unsigned __int64 *)(param_1 + 0x10) = *param_2;
  *(unsigned __int64 *)(param_1 + 0x18) = param_2[1];
  *(unsigned __int64 *)(param_1 + 0x20) = param_2[2];
  *(unsigned __int64 *)(param_1 + 0x28) = param_2[3];
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82937A60(param_1,0xffffffff82031bfc,0xffffffff82032180);
    return 0xffffffffffffffff;
  }
  *(unsigned int *)(param_1 + 0x5c) = 1;
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x80) + 8))();
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4e0,0,0x43c);
}
/* @@ end fn_82939CE8 */

/* @@ begin fn_8293A7B0 */
extern int fn_82936130();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned int lbl_82032444;


int fn_8293A7B0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  bool bVar14;
  bool bVar15;
  int iVar12;
  int iVar13;
  int iVar16;
  
  iVar16 = param_2;
  if (*(int *)(param_2 + 0x30) != 2) {
    iVar16 = param_3;
    param_3 = param_2;
  }
  if ((*(int *)(iVar16 + 0x30) != 2) || (*(int *)(param_3 + 0x30) != 3)) {
    uVar8 = 0xffffffff820321f8;
    goto LAB_8293ac24;
  }
  uVar1 = *(unsigned int *)(param_3 + 0x38);
  uVar2 = *(unsigned int *)(iVar16 + 0x34);
  if ((uVar1 < 0x1b) || (bVar15 = true, 0x22 < uVar1)) {
    bVar15 = false;
  }
  if ((uVar1 < 0x23) || (bVar5 = true, 0x27 < uVar1)) {
    bVar5 = false;
  }
  if ((uVar2 < 0x14) || (bVar14 = true, 0x17 < uVar2)) {
    bVar14 = false;
  }
  if ((uVar2 < 0x18) || (bVar6 = true, 0x1b < uVar2)) {
    bVar6 = false;
  }
  if ((bVar15) || (bVar15 = false, bVar5)) {
    bVar15 = true;
  }
  if ((bVar14) || (bVar5 = false, bVar6)) {
    bVar5 = true;
  }
  if ((bVar15) && (bVar5)) {
    uVar8 = 0xffffffff820325b0;
    goto LAB_8293ac24;
  }
  if ((uVar1 == 0x17) || (((uVar1 == 0x18 || (uVar1 == 0xfc)) || (bVar15 = false, uVar1 == 0xfd))))
  {
    bVar15 = true;
  }
  if ((uVar2 == 0x1d) || (bVar5 = false, uVar2 == 0xf4)) {
    bVar5 = true;
  }
  if ((bVar15) && (bVar5)) {
    uVar8 = 0xffffffff82032584;
    goto LAB_8293ac24;
  }
  iVar3 = *(int *)(iVar16 + 0x68);
  if ((iVar3 != 0) && (iVar12 = *(int *)(param_3 + 0x60), iVar12 != 0)) {
    uVar11 = 0;
    if (uVar1 == 0xf1) {
LAB_8293a984:
      uVar8 = 0xffffffff820324b0;
    }
    else {
      if ((uVar1 == 0xf3) || ((0xfb < uVar1 && (uVar1 < 0xfe)))) {
        uVar11 = 2;
      }
      else {
        uVar11 = (unsigned __int64)*(unsigned char *)(uVar1 + 0x8315ac98);
      }
      if (uVar11 != 4) goto LAB_8293a984;
      uVar8 = 0xffffffff82032518;
    }
    if (*(int *)(iVar3 + 0x10) != *(int *)(iVar12 + 0x10)) {
      uVar9 = 0xffffffff82032494;
LAB_8293a9a4:
      fn_82937A60(param_1,uVar9,uVar8);
      return iVar16;
    }
    if (*(int *)(iVar3 + 0x18) != *(int *)(iVar12 + 0x18)) {
      uVar9 = 0xffffffff82032474;
      goto LAB_8293a9a4;
    }
    if (*(int *)(iVar3 + 0x14) != *(int *)(iVar12 + 0x14)) {
      uVar9 = 0xffffffff82032450;
      goto LAB_8293a9a4;
    }
    iVar13 = *(int *)(iVar3 + 0x28);
    if (((*(int *)(iVar12 + 0x28) != 0) != (iVar13 != 0)) ||
       ((iVar13 != 0 && (*(int *)(iVar13 + 0x10) != *(int *)(*(int *)(iVar12 + 0x28) + 0x10))))) {
      uVar9 = 0xffffffff82032344;
      goto LAB_8293a9a4;
    }
    iVar12 = 0;
    if ((10 < uVar2) && (uVar2 < 0xf)) {
      iVar12 = 5;
    }
    uVar10 = (unsigned __int64)(unsigned char)(&lbl_82032444)[iVar12 + (int)uVar11];
    uVar7 = fn_82936130(param_3,0);
    if ((uVar7 & uVar10 & 0xffffffff) != (*(unsigned int *)(iVar3 + 0x24) & uVar10)) {
      uVar8 = 0xffffffff820323e0;
      goto LAB_8293ac24;
    }
    if ((uVar11 & 0xffffffff) == 4) {
      uVar8 = 0xffffffff82032378;
      goto LAB_8293ac24;
    }
  }
  if (*(int *)(iVar16 + 0x5c) == 0) {
    iVar12 = 0;
  }
  else if (*(int *)(*(int *)(iVar16 + 0x5c) + 0x14) == 0xd000000) {
    iVar12 = -1;
  }
  else {
    iVar12 = 1;
  }
  if (*(int *)(param_3 + 0x5c) == 0) {
    iVar13 = 0;
  }
  else if (*(int *)(*(int *)(param_3 + 0x5c) + 0x14) == 0xd000000) {
    iVar13 = -1;
  }
  else {
    iVar13 = 1;
  }
  if (iVar12 == iVar13) {
    iVar12 = *(int *)(iVar16 + 0x54);
    iVar13 = *(int *)(param_3 + 0x58);
    if ((iVar12 == 0) || (bVar15 = true, *(int *)(iVar12 + 0x10) == 0)) {
      bVar15 = false;
    }
    if ((iVar12 == 0) || (bVar5 = true, *(int *)(iVar12 + 0x10) != 0)) {
      bVar5 = false;
    }
    if ((iVar13 == 0) || (bVar14 = true, *(int *)(iVar13 + 0x10) == 0)) {
      bVar14 = false;
    }
    if ((iVar13 == 0) || (bVar6 = true, *(int *)(iVar13 + 0x10) != 0)) {
      bVar6 = false;
    }
    if (((bVar15) && (bVar14)) && (*(int *)(iVar12 + 0x18) != *(int *)(iVar13 + 0x18))) {
      uVar8 = 0xffffffff820322c0;
    }
    else {
      if (((!bVar15) || (!bVar6)) && ((!bVar14 || (!bVar5)))) {
        *(unsigned int *)(iVar16 + 0x38) = uVar1;
        *(unsigned int *)(iVar16 + 0x48) = *(unsigned int *)(param_3 + 0x48);
        *(unsigned int *)(iVar16 + 0x58) = *(unsigned int *)(param_3 + 0x58);
        if (iVar3 == 0) {
          *(unsigned int *)(iVar16 + 0x68) = *(unsigned int *)(param_3 + 0x60);
        }
        uVar4 = *(unsigned int *)(param_3 + 100);
        *(unsigned int *)(iVar16 + 0x30) = 4;
        *(unsigned int *)(iVar16 + 0x6c) = uVar4;
        return iVar16;
      }
      uVar8 = 0xffffffff82032240;
    }
  }
  else {
    uVar8 = 0xffffffff82032308;
  }
LAB_8293ac24:
  fn_82937A60(param_1,uVar8);
  return iVar16;
}
/* @@ end fn_8293A7B0 */

/* @@ begin fn_8293AC38 */
extern unsigned int *auStack_a0;
extern int fn_82936448();
extern int fn_82936530();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int uStack_a4;


unsigned __int64 fn_8293AC38(int param_1,unsigned int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  __int64 lVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  char *pcVar15;
  char *pcVar16;
  unsigned int *puStack0000001c;
  int iStack_ac;
  int iStack_a8;
  unsigned int uStack_a4;
  unsigned int auStack_a0 [40];
  
  iStack_a8 = *(int *)(param_3 + 0x70);
  bVar5 = false;
  iStack_ac = 0;
  bVar8 = false;
  bVar7 = true;
  bVar9 = false;
  bVar6 = false;
  puStack0000001c = param_2;
  if (iStack_a8 != 0) {
    do {
      piVar4 = (int *)(iStack_a8 + 8);
      iStack_a8 = *(int *)(iStack_a8 + 0xc);
      uVar13 = (unsigned __int64)*(unsigned int *)(*piVar4 + 0xc);
      lVar10 = uVar13 + 0x10;
      pcVar3 = *(char **)(*(int *)(*piVar4 + 8) + 0x18);
      pcVar15 = "position";
      pcVar16 = pcVar3;
      if (uVar13 == 0) {
        lVar10 = 0;
      }
      do {
        cVar1 = *pcVar16;
        cVar2 = *pcVar15;
        if (cVar1 == '\0') break;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar16 + 1;
      } while (cVar1 == cVar2);
      pcVar15 = "interpolators";
      pcVar16 = pcVar3;
      if (cVar1 == cVar2) {
        iStack_ac = iStack_ac + 1;
        if (*(int *)(param_1 + 0x40) == 1) {
          bVar8 = true;
        }
        if (uVar13 != 0) {
          bVar9 = true;
        }
        uVar14 = puStack0000001c[1] & 0xfffff9ff | 0x200;
LAB_8293ae4c:
        puStack0000001c[1] = uVar14;
      }
      else {
        do {
          cVar1 = *pcVar16;
          cVar2 = *pcVar15;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = "colors";
        pcVar16 = pcVar3;
        if (cVar1 == cVar2) {
          if (*(int *)(param_1 + 0x40) == 1) {
LAB_8293ae30:
            bVar8 = true;
          }
LAB_8293ae34:
          iStack_ac = iStack_ac + 1;
          if (uVar13 != 0) {
            bVar9 = true;
          }
          uVar14 = puStack0000001c[1] & 0xfffff9ff | 0x400;
          goto LAB_8293ae4c;
        }
        do {
          cVar1 = *pcVar16;
          cVar2 = *pcVar15;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = pcVar3;
        pcVar16 = "export";
        if (cVar1 == cVar2) {
          if (*(int *)(param_1 + 0x40) != 1) goto LAB_8293ae30;
          goto LAB_8293ae34;
        }
        do {
          cVar1 = *pcVar15;
          cVar2 = *pcVar16;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = pcVar3;
        pcVar16 = "DoNotSerialize";
        if (cVar1 == cVar2) {
          iVar11 = fn_82936448(lVar10,auStack_a0,1,2);
          uVar12 = 0xffffffff8203267c;
          if (iVar11 < 0) {
LAB_8293aea4:
            fn_82937A60(param_1,uVar12);
            goto LAB_8293af74;
          }
          iStack_ac = iStack_ac + 1;
          *puStack0000001c = auStack_a0[0] & 7 | *puStack0000001c & 0xfffffff8;
          puStack0000001c[1] = puStack0000001c[1] | 0x600;
        }
        else {
          do {
            cVar1 = *pcVar15;
            cVar2 = *pcVar16;
            if (cVar1 == '\0') break;
            pcVar15 = pcVar15 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            uVar12 = 0xffffffff820326b0;
            if (!bVar6) {
              uStack_a4 = 0;
              bVar6 = true;
              iVar11 = fn_82936530(lVar10,&uStack_a4);
              if (-1 < iVar11) {
                uVar14 = (uStack_a4 & 1) << 8 | puStack0000001c[1] & 0xfffffeff;
                goto LAB_8293ae4c;
              }
              uVar12 = 0xffffffff820326e4;
            }
            goto LAB_8293aea4;
          }
          fn_82937A60(param_1,0xffffffff82032718,pcVar3);
LAB_8293af74:
          bVar5 = true;
        }
      }
      if (bVar7) {
        if ((iStack_ac == 0) && (!bVar5)) {
          fn_82937A60(param_1,0xffffffff82032730,pcVar3);
          bVar5 = true;
        }
        bVar7 = false;
      }
      if (bVar8) {
        uVar12 = 0xffffffff82032780;
        if (*(int *)(param_1 + 0x40) != 1) {
          uVar12 = 0xffffffff82032788;
        }
        fn_82937A60(param_1,0xffffffff82032790,pcVar3,uVar12);
        bVar5 = true;
        bVar8 = false;
      }
      if (bVar9) {
        fn_82937A60(param_1,0xffffffff820327c0,pcVar3);
        bVar5 = true;
        bVar9 = false;
      }
      if ((1 < iStack_ac) && (!bVar5)) {
        fn_82937A60(param_1,0xffffffff820327ec);
        bVar5 = true;
      }
    } while (iStack_a8 != 0);
    if (iStack_ac != 0) goto LAB_8293b090;
  }
  if (!bVar5) {
    if (*(int *)(param_1 + 0x40) == 1) {
      uVar12 = 0xffffffff82032668;
    }
    else {
      uVar12 = 0xffffffff82032644;
    }
    fn_82937A60(param_1,0xffffffff8203260c,uVar12);
    bVar5 = true;
  }
LAB_8293b090:
  return -(unsigned __int64)bVar5 & 0xffffffff80004005;
}
/* @@ end fn_8293AC38 */

/* @@ begin fn_8293B0B0 */
extern void fn_82937A60(void *self, const char *fmt, ...);


unsigned __int64 fn_8293B0B0(unsigned __int64 param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  bool bVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 == 0) {
LAB_8293b0d0:
    uVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x70);
    uVar6 = 0;
    bVar8 = false;
    while (iVar3 != 0) {
      piVar5 = (int *)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 0xc);
      pcVar4 = *(char **)(*(int *)(*piVar5 + 8) + 0x18);
      pcVar10 = pcVar4;
      pcVar9 = param_3;
      do {
        cVar1 = *pcVar10;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = 0xffffffff82031908;
LAB_8293b198:
          fn_82937A60(param_1,uVar7,param_3);
          goto LAB_8293b0d0;
        }
        uVar6 = (unsigned __int64)*(unsigned int *)(*piVar5 + 0xc);
        if (uVar6 == 0) {
          uVar7 = 0xffffffff820319e8;
          goto LAB_8293b198;
        }
        uVar6 = uVar6 + 0x10;
      }
      else if (param_4 != 0) {
        fn_82937A60(param_1,0xffffffff82032814,pcVar4,param_3);
        bVar8 = true;
      }
    }
    uVar6 = -(unsigned __int64)!bVar8 & uVar6;
  }
  return uVar6;
}
/* @@ end fn_8293B0B0 */

/* @@ begin fn_8293B1B8 */
extern unsigned int *auStack_20;
extern int fn_82936530();
extern unsigned __int64 fn_8293B0B0();


unsigned int fn_8293B1B8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int auStack_20 [4];
  
  uVar1 = fn_8293B0B0(param_1,param_2,0xffffffff8203283c,1);
  uVar3 = 0;
  if ((uVar1 & 0xffffffff) != 0) {
    auStack_20[0] = 0;
    iVar2 = fn_82936530(uVar1,auStack_20);
    if (-1 < iVar2) {
      uVar3 = auStack_20[0];
    }
  }
  return uVar3;
}
/* @@ end fn_8293B1B8 */

/* @@ begin fn_8293B218 */
extern void fn_82937A60(void *self, const char *fmt, ...);


unsigned __int64 fn_8293B218(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    fn_82937A60(param_1,"config %s statements must appear before other ALU, flow, or config statements. (They may appear after defconst statements.)",param_2);
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}
/* @@ end fn_8293B218 */

/* @@ begin fn_8293B260 */
extern void fn_82937A60(void *self, const char *fmt, ...);


void fn_8293B260(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned char uVar7;
  __int64 lVar8;
  unsigned char bVar9;
  __int64 lVar10;
  
  uVar5 = 0;
  bVar2 = false;
  lVar10 = 4;
  lVar6 = 0;
  bVar9 = 0;
  lVar8 = 0;
  iVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = (*(unsigned int *)(param_4 + 0x24) >> (uVar4 & 0x3f)) - iVar3;
    iVar3 = iVar3 + 1;
    uVar5 = (uVar1 & 3) << (uVar4 & 0x3f) | uVar5;
    uVar4 = uVar4 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar3 = *(int *)(param_4 + 0x14);
  if (iVar3 != 0x1000000) {
    if (iVar3 == 0xb000000) {
      bVar2 = true;
      goto LAB_8293b2ec;
    }
    if (iVar3 != 0xc000000) goto LAB_8293b2ec;
    bVar2 = true;
  }
  lVar6 = 1;
LAB_8293b2ec:
  if (*(int *)(param_4 + 0x10) == 0) {
    lVar8 = 1;
    bVar9 = (unsigned char)*(unsigned int *)(param_4 + 0x18) & 0x3f;
    if (bVar2) {
      bVar9 = bVar9 | 0x80;
    }
    if ((*(int *)(param_4 + 0x28) != 0) && (*(int *)(*(int *)(param_4 + 0x28) + 0x10) == 0xf)) {
      bVar9 = bVar9 | 0x40;
    }
  }
  else if (*(int *)(param_4 + 0x10) == 2) {
    bVar9 = *(unsigned char *)(param_4 + 0x1b);
    lVar8 = 0;
  }
  else {
    fn_82937A60(param_1,0xffffffff820328c8,param_3 + 1);
  }
  uVar7 = (unsigned char)uVar5;
  if ((param_3 & 0xffffffff) == 0) {
    *(unsigned char *)(param_2 + 5) = uVar7;
    *(unsigned char *)(param_2 + 9) = bVar9;
    *(unsigned int *)(param_2 + 8) = (unsigned int)(lVar8 << 0x1f) | *(unsigned int *)(param_2 + 8) & 0x7fffffff;
    *(unsigned int *)(param_2 + 4) = (unsigned int)(lVar6 << 0x1a) | *(unsigned int *)(param_2 + 4) & 0xfbffffff;
  }
  else {
    if ((param_3 & 0xffffffff) == 1) {
      *(unsigned char *)(param_2 + 10) = bVar9;
      *(unsigned char *)(param_2 + 6) = uVar7;
      uVar5 = (unsigned int)(lVar8 << 0x1e) | *(unsigned int *)(param_2 + 8) & 0xbfffffff;
      uVar4 = (unsigned int)(lVar6 << 0x19) | *(unsigned int *)(param_2 + 4) & 0xfdffffff;
    }
    else {
      if (2 < (param_3 & 0xffffffff)) {
        return;
      }
      *(unsigned char *)(param_2 + 7) = uVar7;
      *(unsigned char *)(param_2 + 0xb) = bVar9;
      uVar5 = (unsigned int)(lVar8 << 0x1d) | *(unsigned int *)(param_2 + 8) & 0xdfffffff;
      uVar4 = (unsigned int)(lVar6 << 0x18) | *(unsigned int *)(param_2 + 4) & 0xfeffffff;
    }
    *(unsigned int *)(param_2 + 4) = uVar4;
    *(unsigned int *)(param_2 + 8) = uVar5;
  }
  return;
}
/* @@ end fn_8293B260 */

/* @@ begin fn_8293B3D8 */
extern int fn_82935FA0();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned int lbl_821CE37C;
extern unsigned int uStack_60;


void fn_8293B3D8(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  unsigned char uVar19;
  unsigned int uVar18;
  unsigned int uVar20;
  unsigned int *puVar21;
  unsigned int *puVar22;
  __int64 lVar23;
  unsigned __int64 uStack_60;
  
  puVar22 = (unsigned int *)&uStack_60;
  uStack_60 = 0;
  uVar20 = 0;
  puVar21 = (unsigned int *)(param_3 + 0x44);
  do {
    uVar17 = puVar21[4];
    if (uVar17 != 0) {
      iVar16 = *(int *)(uVar17 + 0x10);
      if (iVar16 == 0) {
        uVar7 = (*(unsigned int *)(uVar17 + 0x18) & 0x3f) << 0x19 | *puVar22 & 0x81ffffff;
LAB_8293b480:
        *puVar22 = uVar7;
      }
      else {
        if (iVar16 == 2) {
          uVar8 = 0xffffffff82032b90;
          goto LAB_8293b5f8;
        }
        if (((iVar16 == 4) || (iVar16 == 6)) || (iVar16 == 8)) {
          uVar7 = (*(unsigned int *)(uVar17 + 0x18) & 0x3f) << 0x19 | 0x80000000 | *puVar22 & 0x1ffffff;
          goto LAB_8293b480;
        }
        fn_82937A60(param_1,0xffffffff82032bec);
      }
      uVar7 = fn_82935FA0(param_1,*(unsigned int *)(uVar17 + 0x20));
      if (uVar7 == 0xffffffff) {
        fn_82937A60(param_1,0xffffffff82032b68);
        break;
      }
      iVar16 = 0;
      uVar12 = 0;
      uVar10 = 0;
      do {
        uVar18 = uVar7 >> (uVar10 & 0x3f);
        uVar11 = uVar18 & 7;
        if ((uVar18 & 7) == 0) {
LAB_8293b4cc:
          iVar9 = 0 << (uVar12 & 0x3f);
LAB_8293b4d0:
          *puVar22 = *puVar22 & 0xfe01ffff | (iVar9 << 0x11 | *puVar22) & 0x1fe0000;
        }
        else {
          if (uVar11 < 5) {
            if (uVar11 == iVar16 + 1U) {
              iVar9 = 1 << (uVar12 & 0x3f);
              goto LAB_8293b4d0;
            }
            uVar8 = 0xffffffff82032ab8;
            uVar19 = (&lbl_821CE37C)[iVar16];
            goto LAB_8293b644;
          }
          if (uVar11 == 5) {
            uVar18 = *puVar22;
            if ((uVar18 & 0x80000000) == 0) {
              uVar8 = 0xffffffff82032ad8;
              goto LAB_8293b5f8;
            }
            iVar9 = 2;
LAB_8293b5c4:
            *puVar22 = uVar18 & 0xfe01ffff |
                       ((iVar9 << (uVar12 & 0x3f)) << 0x11 | uVar18) & 0x1fe0000;
          }
          else {
            if (uVar11 < 7) {
              uVar18 = *puVar22;
              if ((uVar18 & 0x80000000) != 0) {
                iVar9 = 3;
                goto LAB_8293b5c4;
              }
              uVar8 = 0xffffffff82032b20;
              goto LAB_8293b5f8;
            }
            if (uVar11 == 7) goto LAB_8293b4cc;
          }
        }
        uVar10 = uVar10 + 3;
        iVar16 = iVar16 + 1;
        uVar12 = uVar12 + 2;
      } while (uVar10 < 0xc);
      uVar7 = *puVar22;
      iVar16 = *(int *)(uVar17 + 0x28);
      uVar17 = *puVar21 >> 4 & 0x10000 | uVar7 & 0xfffeffff;
      *puVar22 = uVar17;
      if (iVar16 != 0) {
        if ((uVar7 & 0x80000000) != 0) {
          uVar8 = 0xffffffff82032a70;
          goto LAB_8293b5f8;
        }
        if (*(int *)(iVar16 + 0x10) != 0xf) {
          uVar8 = 0xffffffff82032a20;
          goto LAB_8293b5f8;
        }
        *puVar22 = uVar17 | 0x8000;
      }
    }
    uVar20 = uVar20 + 1;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  } while (uVar20 < 2);
  iVar9 = 0;
  iVar16 = 0;
  puVar21 = (unsigned int *)&uStack_60;
  lVar23 = 2;
  do {
    iVar3 = -((int)*puVar21 >> 0x1f);
    if ((iVar3 != 0) || (iVar15 = 1, (*puVar21 & 0x1fe0000) == 0)) {
      iVar15 = 0;
    }
    iVar9 = iVar15 + iVar9;
    iVar16 = iVar3 + iVar16;
    puVar21 = puVar21 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  if ((iVar9 == 0) || (iVar16 == 0)) {
    uVar20 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
    uVar17 = (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF);
    if (((uStack_60 & 0x8000000000000000) != 0) || (iVar16 = 0, (uStack_60 & 0x80000000) != 0)) {
      iVar16 = 1;
    }
    *param_2 = iVar16 << 0xf | *param_2 & 0xffff7fff;
    if (iVar16 == 0) {
      iVar16 = 0;
      do {
        uVar13 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar7 = *(unsigned int *)((int)&uStack_60 + iVar16 * 4);
        lVar23 = 4;
        do {
          if (((uVar7 >> 0x11 & 0xff) >> (uVar10 & 0x3f) & 3) == 1) {
            uVar13 = (unsigned int)(1 << (uVar12 & 0x3f)) | uVar13;
          }
          uVar12 = uVar12 + 1;
          uVar10 = uVar10 + 2;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        uVar10 = *param_2;
        if (iVar16 == 0) {
          uVar7 = (unsigned int)(uVar13 << 0x10) & 0xf0000;
          uVar10 = uVar10 & 0xfff0ff80;
          uVar18 = ((((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x10 & 0x7e00 | (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0x8000) >> 9;
        }
        else {
          uVar12 = uVar7 >> 0x11 & 0x3f00;
          uVar18 = uVar7 >> 1 & 0x4000;
          *param_2 = uVar12 | uVar10 & 0xffffc0ff;
          uVar7 = (unsigned int)(uVar13 << 0x14) & 0xf00000;
          uVar10 = uVar12 | uVar10 & 0xff0f80ff;
        }
        iVar16 = iVar16 + 1;
        *param_2 = uVar18 | uVar7 | uVar10;
      } while (iVar16 < 2);
    }
    else {
      uVar7 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x11 & 0xff;
      uVar10 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
      if (uVar7 == 0) {
        uVar10 = (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF);
      }
      uVar10 = uVar10 >> 0x19 & 0x3f;
      if ((uVar10 != ((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x19 & 0x3f)) && ((uStack_60 & 0x1fe0000) != 0)) {
        uVar8 = 0xffffffff820329e0;
        goto LAB_8293b5f8;
      }
      bVar6 = false;
      bVar5 = false;
      *param_2 = uVar10 | *param_2 & 0xffffffc0;
      uVar12 = 0;
      uVar10 = 0;
      uVar18 = 0;
      uVar11 = 0;
      do {
        uVar1 = uVar7 >> (uVar11 & 0x3f);
        uVar14 = uVar1 & 3;
        uVar2 = ((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x11 & 0xff) >> (uVar11 & 0x3f);
        uVar4 = uVar2 & 3;
        if ((uVar14 == 1) && (uVar4 == 1)) {
          uVar8 = 0xffffffff82032968;
LAB_8293b814:
          uVar19 = (&lbl_821CE37C)[uVar18];
LAB_8293b644:
          fn_82937A60(param_1,uVar8,uVar19);
          return;
        }
        if (((uVar14 != uVar4) && ((uVar1 & 3) != 0)) && ((uVar2 & 3) != 0)) {
          uVar8 = 0xffffffff8203292c;
          goto LAB_8293b814;
        }
        if (((uVar1 & 3) == 0) && (uVar14 = uVar4, uVar4 == 1)) {
          uVar14 = 4;
        }
        iVar9 = 0;
        iVar16 = 0;
        if (uVar14 == 0) {
          bVar5 = true;
LAB_8293b79c:
          iVar9 = 0;
LAB_8293b7a0:
          iVar16 = 0;
        }
        else {
          if (uVar14 != 1) {
            if (uVar14 < 3) {
              bVar6 = true;
              goto LAB_8293b79c;
            }
            if (uVar14 == 3) {
              iVar9 = 1;
              goto LAB_8293b790;
            }
            if (4 < uVar14) goto LAB_8293b7a4;
            iVar9 = 1;
            goto LAB_8293b7a0;
          }
          iVar9 = 0;
LAB_8293b790:
          iVar16 = 1;
        }
LAB_8293b7a4:
        uVar11 = uVar11 + 2;
        uVar12 = iVar16 << (uVar18 & 0x3f) | uVar12;
        uVar10 = iVar9 << (uVar18 & 0x3f) | uVar10;
        uVar18 = uVar18 + 1;
      } while ((int)uVar11 < 8);
      *param_2 = ((uVar10 & 0xf) << 4 | uVar12 & 0xf) << 0x10 | *param_2 & 0xff00ffff;
      if ((bVar6) && (bVar5)) {
        fn_82937A60(param_1,0xffffffff820329b0);
      }
      if (bVar6) {
        *param_2 = *param_2 | 0x4000;
      }
    }
    *param_2 = ((uVar17 & 0x10000) << 1 | uVar20 & 0x10000) << 8 | *param_2 & 0xfcffffff;
  }
  else {
    uVar8 = 0xffffffff82032bb0;
LAB_8293b5f8:
    fn_82937A60(param_1,uVar8);
  }
  return;
}
/* @@ end fn_8293B3D8 */

/* @@ begin fn_8293B8F8 */
extern void fn_82937A60(void *self, const char *fmt, ...);

int fn_8293B8F8(void *self, Operand_8293B8F8 *op, const char *name)
{
  unsigned int mod = op->mod;
  int err = 0;
  if (mod == 0x1000000 || mod == 0xc000000) {
    fn_82937A60(self, "A '-' modifier is not allowed on a fetch instruction %s register.", name);
    err = 1;
  }
  if (mod == 0xb000000 || mod == 0xc000000) {
    fn_82937A60(self, "An _abs modifier is not allowed on a fetch instruction %s register.", name);
    err = 1;
  }
  return err;
}
/* @@ end fn_8293B8F8 */

/* @@ begin fn_8293B978 */
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293B8F8();
extern unsigned int lbl_82032E0C;


void fn_8293B978(unsigned __int64 param_1,unsigned int *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  
  uVar9 = (unsigned __int64)*param_2;
  uVar8 = param_2[1];
  uVar7 = param_2[2];
  if (*(int *)(param_3 + 0x5c) != 0) {
    uVar10 = 0xffffffff;
    if (*(int *)(*(int *)(param_3 + 0x5c) + 0x14) != 0xd000000) {
      uVar10 = 1;
    }
    uVar8 = uVar8 | 0x80000000;
    uVar7 = -uVar10 & ~uVar10 & 0x80000000 | uVar7 & 0x7fffffff;
  }
  if ((*param_2 & 0x1f) < 0x14) {
    iVar1 = *(int *)(param_3 + 0x54);
    iVar5 = fn_8293B8F8(param_1,iVar1,0xffffffff82032ec8);
    if (iVar5 != 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar6 = 0xffffffff82032e8c;
      goto LAB_8293ba18;
    }
    uVar9 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x18) & 0x3f) << 0xc | uVar9 & 0xfffffffffffc0fff;
    if (*(int *)(iVar1 + 0x28) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x10) != 0xf) {
        uVar6 = 0xffffffff82032e30;
        goto LAB_8293ba18;
      }
      uVar9 = uVar9 | 0x40000;
    }
    uVar10 = *(unsigned int *)(iVar1 + 0x20);
    uVar8 = (((*(unsigned int *)(&lbl_82032E0C + (uVar10 >> 7 & 0x1c)) & 7) << 3 |
             *(unsigned int *)(&lbl_82032E0C + (uVar10 >> 4 & 0x1c)) & 7) << 3 |
            *(unsigned int *)(&lbl_82032E0C + (uVar10 >> 1 & 0x1c)) & 7) << 3 |
            *(unsigned int *)(&lbl_82032E0C + (uVar10 & 7) * 4) & 7 | uVar8 & 0xfffff000;
  }
  else {
    uVar8 = uVar8 | 0xfff;
  }
  uVar10 = (unsigned int)uVar9;
  if (param_4 != 1) {
    iVar1 = *(int *)(param_3 + 0x60);
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar6 = 0xffffffff82032dc8;
LAB_8293ba18:
      fn_82937A60(param_1,uVar6);
      return;
    }
    if (*(int *)(iVar1 + 0x28) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x10) != 0xf) {
        uVar6 = 0xffffffff82032d70;
        goto LAB_8293ba18;
      }
      uVar9 = uVar9 | 0x800;
    }
    iVar5 = fn_8293B8F8(param_1,iVar1,0xffffffff82032d64);
    if (iVar5 != 0) {
      return;
    }
    uVar2 = *(unsigned int *)(iVar1 + 0x24);
    uVar3 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x18) & 0x3f) << 5;
    uVar4 = uVar9 & 0x1f;
    if (uVar4 == 0) {
      uVar10 = uVar2 << 0x1e | (unsigned int)uVar3 | (unsigned int)uVar9 & 0x3ffff81f;
    }
    else {
      uVar9 = ((unsigned __int64)uVar2 & 0x3f) << 0x1a | uVar3 | uVar9 & 0xffffffff03fff81f;
      uVar10 = (unsigned int)uVar9;
      if (uVar4 == 0x12) {
        uVar9 = ((unsigned __int64)uVar2 & 0x3f) >> 2 & 3;
        if ((uVar9 == ((unsigned __int64)uVar2 & 0x3f) >> 4) && (uVar9 == ((unsigned __int64)(uVar2 >> 6) & 3)))
        goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032c9c;
      }
      else if (uVar4 == 0x18) {
        uVar9 = (unsigned __int64)uVar2 & 3;
        if (((uVar9 == (((unsigned __int64)uVar2 & 0x3f) >> 2 & 3)) &&
            (uVar9 == ((unsigned __int64)uVar2 & 0x3f) >> 4)) && (uVar9 == ((unsigned __int64)(uVar2 >> 6) & 3)))
        goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032ce0;
      }
      else {
        if (((uVar9 >> 0x18 ^ (unsigned __int64)uVar2) & 0xc0) == 0) goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032d20;
      }
      fn_82937A60(param_1,uVar6);
    }
  }
LAB_8293bbc0:
  *param_2 = uVar10;
  param_2[1] = uVar8;
  param_2[2] = uVar7;
  return;
}
/* @@ end fn_8293B978 */

/* @@ begin fn_8293BBD8 */
extern void fn_82937A60(void *self, const char *fmt, ...);


void fn_8293BBD8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  if ((*(unsigned int *)(param_1 + 0x60) & 8) == 0) {
    iVar1 = 0;
    uVar4 = 0;
    uVar2 = 0;
    lVar5 = 0x10;
    do {
      if (*(char *)(param_1 + 0xa4 + uVar2) != '\0') {
        iVar1 = iVar1 + 1;
        uVar4 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((iVar1 != 0) && (iVar1 != uVar4 + 1)) {
      cVar3 = (-(*(int *)(param_1 + 0x40) == 1) & 3U) + 0x6f;
      fn_82937A60(param_1,0xffffffff82032f08,cVar3);
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          if (*(char *)(param_1 + 0xa4 + uVar2) == '\0') {
            fn_82937A60(param_1,0xffffffff82032ed4,cVar3,uVar2);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
    }
  }
  return;
}
/* @@ end fn_8293BBD8 */

/* @@ begin fn_8293BCC0 */
extern int fn_828F5688();
extern int fn_829355C0();
extern int fn_829356D8();
extern int fn_82937AA8();
extern unsigned __int64 fn_82939CE8();


unsigned __int64 fn_8293BCC0(int param_1)

{
  unsigned char bVar1;
  char cVar2;
  int iVar4;
  char cVar5;
  unsigned __int64 uVar3;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
switchD_8293bdbc_caseD_c:
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (iVar4 = fn_829356D8(*(unsigned int *)(param_1 + 4),param_1 + 0x10), iVar4 < 0)) {
    *(unsigned int *)(param_1 + 0x34) = 1;
    *(unsigned int *)(param_1 + 0x38) = 1;
    return 0xffffffffffffffff;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x7c) = 1;
  if (iVar4 != 0xc) {
    bVar1 = *(unsigned char *)(param_1 + 8);
    if (bVar1 == 0) {
      if ((iVar4 == 9) && (cVar5 = fn_829355C0(*(unsigned int *)(param_1 + 0x18)), cVar5 != '\0')) {
        fn_828F5688(*(unsigned int *)(param_1 + 4),1);
        *(unsigned char *)(param_1 + 8) = 1;
      }
    }
    else if (bVar1 == 1) {
      if (((iVar4 != 1) || (*(char *)(param_1 + 0x19) != '\0')) ||
         (*(char *)(param_1 + 0x18) != '.')) goto LAB_8293bd24;
      *(unsigned char *)(param_1 + 8) = 2;
    }
    else if (bVar1 < 3) {
LAB_8293bd24:
      *(unsigned char *)(param_1 + 8) = 0;
      fn_828F5688(*(unsigned int *)(param_1 + 4),0);
    }
  }
  switch(*(unsigned int *)(param_1 + 0x10)) {
  default:
    return 0x118;
  case 1:
    if (*(char *)(param_1 + 0x19) != '\0') {
      return 0x118;
    }
    return (unsigned __int64)*(unsigned char *)(param_1 + 0x18);
  case 2:
  case 3:
  case 4:
    return 0x116;
  case 5:
  case 6:
  case 7:
  case 8:
    return 0x117;
  case 9:
    pcVar8 = *(char **)(param_1 + 0x18);
    pcVar6 = "entrypoint";
    pcVar7 = pcVar8;
    break;
  case 0xc:
    goto switchD_8293bdbc_caseD_c;
  case 0xd:
    return 0xffffffffffffffff;
  }
  while( true ) {
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
    if (cVar5 != cVar2) break;
    cVar5 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar5 == '\0') break;
  }
  if (cVar5 == cVar2) {
    uVar3 = 0x101;
  }
  else {
    pcVar6 = "true";
    pcVar7 = pcVar8;
    do {
      cVar5 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar5 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 == cVar2);
    if (cVar5 == cVar2) {
      uVar3 = 0x119;
    }
    else {
      pcVar6 = "false";
      pcVar7 = pcVar8;
      do {
        cVar5 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 == cVar2);
      if (cVar5 == cVar2) {
        uVar3 = 0x11a;
      }
      else {
        pcVar6 = "serialize";
        pcVar7 = pcVar8;
        do {
          cVar5 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar5 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 == cVar2);
        if (cVar5 == cVar2) {
          uVar3 = 0x11b;
        }
        else {
          pcVar7 = "defconst";
          do {
            cVar5 = *pcVar8;
            cVar2 = *pcVar7;
            if (cVar5 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar5 == cVar2);
          if (cVar5 == cVar2) {
            uVar3 = ((unsigned __int64 (*)())fn_82939CE8)();
          }
          else {
            uVar3 = fn_82937AA8(param_1,(unsigned int *)(param_1 + 0x10));
          }
        }
      }
    }
  }
  return uVar3;
}
/* @@ end fn_8293BCC0 */

/* @@ begin fn_8293BF58 */
extern int fn_82936448();
extern int fn_82936530();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned __int64 fn_8293B218();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


__int64 fn_8293BF58(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  unsigned char bVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  unsigned int uVar14;
  int *piVar15;
  __int64 lVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned int uStack_b0;
  int iStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  
  lVar16 = -0x7fffbffb;
  lVar7 = 0;
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff820330c4);
    lVar7 = lVar16;
  }
  iStack_ac = *(int *)(param_2 + 0x70);
  if (iStack_ac != 0) {
    pcStack_a4 = "vertex";
    pcStack_a8 = "pixel";
    do {
      piVar5 = (int *)(iStack_ac + 8);
      iStack_ac = *(int *)(iStack_ac + 0xc);
      iVar12 = *(int *)(*piVar5 + 0xc);
      piVar15 = (int *)(iVar12 + 0x10);
      pcVar4 = *(char **)(*(int *)(*piVar5 + 8) + 0x18);
      if (iVar12 == 0) {
        piVar15 = (int *)0x0;
      }
      bVar6 = false;
      uVar14 = 0;
      puVar17 = (unsigned int *)0x8315ab90;
      do {
        if (bVar6) break;
        pcVar11 = pcVar4;
        pcVar10 = (char *)puVar17[-4];
        do {
          cVar1 = *pcVar11;
          cVar2 = *pcVar10;
          if (cVar1 == '\0') break;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) goto LAB_8293c3c0;
        bVar6 = true;
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar12 = puVar17[-2];
        }
        else {
          iVar12 = puVar17[-3];
        }
        if (iVar12 == 0) {
          pcVar11 = pcStack_a8;
          if (*(int *)(param_1 + 0x44) == 0) {
            pcVar11 = pcStack_a4;
          }
          fn_82937A60(param_1,0xffffffff82032f74,(char *)puVar17[-4],pcVar11);
          lVar7 = lVar16;
        }
        uVar18 = 1 << (*(unsigned char *)(puVar17 + -1) & 0x3f);
        if ((*(unsigned int *)(param_1 + 0x128) & uVar18) != 0) {
          fn_82937A60(param_1,0xffffffff82032f9c,puVar17[-4]);
          lVar7 = lVar16;
        }
        *(unsigned int *)(param_1 + 0x128) = *(unsigned int *)(param_1 + 0x128) | uVar18;
        if (*(int *)(param_1 + 300) == 0) {
          fn_82937A60(param_1,0xffffffff82032fbc);
          lVar7 = lVar16;
        }
        uVar18 = 0;
        uStack_b0 = 0;
        if ((int)lVar7 < 0) goto LAB_8293c3c0;
        bVar3 = *(unsigned char *)((int)puVar17 + -3);
        if (bVar3 == 0) {
          if ((piVar15 == (int *)0x0) || (*piVar15 != 9)) {
            fn_82937A60(param_1,0xffffffff82032ff8,puVar17[-4]);
            lVar7 = -0x7fffbffb;
            goto LAB_8293c230;
          }
          puVar9 = (unsigned int *)*puVar17;
          pcVar11 = (char *)*puVar9;
          uVar8 = 0xffffffff82033020;
          pcVar13 = (char *)piVar15[2];
          pcVar10 = pcVar11;
          if (pcVar11 != (char *)0x0) {
LAB_8293c1cc:
            do {
              cVar1 = *pcVar13;
              cVar2 = *pcVar11;
              if (cVar1 != '\0') {
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
                if (cVar1 == cVar2) goto LAB_8293c1cc;
              }
              pcVar11 = pcVar10;
              if (cVar1 == cVar2) break;
              puVar9 = puVar9 + 2;
              pcVar11 = (char *)*puVar9;
              pcVar13 = (char *)piVar15[2];
              pcVar10 = pcVar11;
            } while (pcVar11 != (char *)0x0);
            if (pcVar11 != (char *)0x0) {
              uVar18 = (unsigned int)*(unsigned char *)(puVar9 + 1);
              goto LAB_8293c230;
            }
          }
LAB_8293c15c:
          fn_82937A60(param_1,uVar8,puVar17[-4]);
          lVar7 = lVar16;
          goto LAB_8293c3c0;
        }
        if (bVar3 == 1) {
          lVar7 = fn_82936530(piVar15,&uStack_b0);
          uVar18 = uStack_b0;
          if (lVar7 < 0) {
            fn_82937A60(param_1,0xffffffff82033040,puVar17[-4]);
            uVar18 = uStack_b0;
            goto LAB_8293c230;
          }
        }
        else if (bVar3 < 3) {
          lVar7 = fn_82936448(piVar15,&uStack_b0,0,*puVar17);
          uVar8 = 0xffffffff82033068;
          uVar18 = uStack_b0;
          if (lVar7 < 0) goto LAB_8293c15c;
        }
        else {
LAB_8293c230:
          if ((int)lVar7 < 0) goto LAB_8293c3c0;
        }
        switch(*(unsigned char *)(puVar17 + -1)) {
        case 0:
          *(unsigned int *)(param_1 + 0x120) = *(unsigned int *)(param_1 + 0x120) & 0xffffffc0 | uVar18 & 0x3f;
          goto LAB_8293c3c0;
        case 1:
          uVar18 = (uVar18 & 0x3f) << 8 | *(unsigned int *)(param_1 + 0x120) & 0xffffc0ff;
          break;
        case 2:
          uVar18 = (uVar18 & 1) << 0x10 | *(unsigned int *)(param_1 + 0x120) & 0xfffeffff;
          break;
        case 3:
          uVar18 = (uVar18 & 1) << 0x11 | *(unsigned int *)(param_1 + 0x120) & 0xfffdffff;
          break;
        case 4:
          uVar18 = (uVar18 & 1) << 0x12 | *(unsigned int *)(param_1 + 0x120) & 0xfffbffff;
          break;
        case 5:
          uVar18 = (uVar18 & 1) << 0x13 | *(unsigned int *)(param_1 + 0x120) & 0xfff7ffff;
          break;
        case 6:
          uVar18 = (uVar18 & 0xf) << 0x14 | *(unsigned int *)(param_1 + 0x120) & 0xff0fffff;
          break;
        case 7:
          uVar18 = (uVar18 & 7) << 0x18 | *(unsigned int *)(param_1 + 0x120) & 0xf8ffffff;
          break;
        case 8:
          uVar18 = (uVar18 & 1) << 0x1b | *(unsigned int *)(param_1 + 0x120) & 0xf7ffffff;
          break;
        case 9:
          uVar18 = (uVar18 & 7) << 0x1c | *(unsigned int *)(param_1 + 0x120) & 0x8fffffff;
          break;
        case 10:
          uVar18 = uVar18 << 0x1f | *(unsigned int *)(param_1 + 0x120) & 0x7fffffff;
          break;
        case 0xb:
          uVar18 = uVar18 & 1 | *(unsigned int *)(param_1 + 0x124) & 0xfffffffe;
          goto code_r0x8293c308;
        case 0xc:
          uVar18 = (uVar18 & 1) << 1 | *(unsigned int *)(param_1 + 0x124) & 0xfffffffd;
          goto code_r0x8293c308;
        case 0xd:
          *(char *)(param_1 + 0x126) = (char)uVar18;
          goto LAB_8293c3c0;
        case 0xe:
          uVar18 = (uVar18 & 1) << 0x10 | *(unsigned int *)(param_1 + 0x124) & 0xfffeffff;
          goto code_r0x8293c308;
        case 0xf:
          uVar18 = (uVar18 & 1) << 0x11 | *(unsigned int *)(param_1 + 0x124) & 0xfffdffff;
          goto code_r0x8293c308;
        case 0x10:
          uVar18 = (uVar18 & 1) << 0x12 | *(unsigned int *)(param_1 + 0x124) & 0xfffbffff;
code_r0x8293c308:
          *(unsigned int *)(param_1 + 0x124) = uVar18;
          goto LAB_8293c3c0;
        case 0x11:
          if (uVar18 != 0) {
            uVar18 = *(unsigned int *)(param_1 + 0x60) | 8;
code_r0x8293c3bc:
            *(unsigned int *)(param_1 + 0x60) = uVar18;
          }
          goto LAB_8293c3c0;
        case 0x12:
          if (uVar18 == 0) {
            uVar18 = *(unsigned int *)(param_1 + 0x60) | 0x20;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x13:
          if (uVar18 == 0) {
            uVar18 = *(unsigned int *)(param_1 + 0x60) | 0x10;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x14:
          lVar7 = fn_8293B218(param_1,pcVar4);
          if ((-1 < lVar7) && (uVar18 != 0)) {
            uVar18 = *(unsigned int *)(param_1 + 0x60) | 0x40;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x15:
          if (uVar18 == 0) {
            uVar18 = *(unsigned int *)(param_1 + 0x60) | 0x80;
            goto code_r0x8293c3bc;
          }
        default:
          goto LAB_8293c3c0;
        }
        *(unsigned int *)(param_1 + 0x120) = uVar18;
LAB_8293c3c0:
        uVar14 = uVar14 + 1;
        puVar17 = puVar17 + 5;
      } while (uVar14 < 0xe);
      if (!bVar6) {
        fn_82937A60(param_1,0xffffffff820330a0,pcVar4);
        lVar7 = lVar16;
      }
    } while (iStack_ac != 0);
  }
  return lVar7;
}
/* @@ end fn_8293BF58 */

/* @@ begin fn_8293C408 */
extern int fn_82635A30();
extern int fn_82635A38();
extern void fn_8293BBD8();
extern int fn_82BD8FD0();


unsigned int fn_8293C408(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    *(unsigned int *)(param_1 + 0x54) = 1;
    ((void (*)())fn_8293BBD8)();
    fn_82635A30(*(unsigned int *)(param_1 + 0x138),*(unsigned int *)(param_1 + 0x60));
  }
  if (param_2 == 0) goto LAB_8293c4b0;
  if (*(int *)(param_1 + 0x58) == 0) {
    *(unsigned int *)(param_1 + 0x58) = 1;
    fn_82635A38(*(unsigned int *)(param_1 + 0x138),*(unsigned int *)(param_1 + 0x60) & 0xf8);
    iVar1 = *(int *)(param_1 + 0x13c);
    if (iVar1 == 0) goto LAB_8293c4b0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 2) goto LAB_8293c4b0;
    *(unsigned int *)(param_1 + 0x58) = 3;
    fn_82635A38(*(unsigned int *)(param_1 + 0x138),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x60) & 0xf8 | 0x100000001);
    iVar1 = *(int *)(param_1 + 0x13c);
    if (iVar1 == 0) goto LAB_8293c4b0;
    uVar2 = 1;
  }
  fn_82BD8FD0(iVar1,uVar2);
LAB_8293c4b0:
  return *(unsigned int *)(param_1 + 0x138);
}
/* @@ end fn_8293C408 */

/* @@ begin fn_8293C4C0 */
extern int fn_82635B30();
extern int fn_82635BB0();
extern int fn_82635C30();
extern int fn_82635D20();
extern int fn_82635DB8();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293C408();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_8315ACF0;


unsigned __int64 fn_8293C4C0(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  char cVar11;
  int *piVar10;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  float *pfVar17;
  unsigned int uVar18;
  __int64 lVar19;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float afStack_70 [28];
  
  uVar15 = 0;
  *(unsigned int *)(param_1 + 300) = 0;
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0xf5) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff82033164);
    }
    iVar2 = *(int *)(param_2 + 0x54);
    if (*(int *)(iVar2 + 0x10) != 2) {
      uVar5 = 0xffffffff820330ec;
LAB_8293cbb0:
      fn_82937A60(param_1,uVar5);
      return 0;
    }
    pfVar17 = afStack_70;
    piVar8 = (int *)(param_2 + 0x60);
    lVar19 = 4;
    do {
      iVar13 = *(int *)(*piVar8 + 0x10);
      if ((iVar13 == 2) || (iVar13 == 4)) {
        iVar13 = 2;
LAB_8293cb60:
        if (iVar13 == 5) goto LAB_8293cb08;
        fn_82937A60(param_1,0xffffffff82033140);
      }
      else {
        if ((iVar13 < 5) || (8 < iVar13)) goto LAB_8293cb60;
LAB_8293cb08:
        *pfVar17 = (float)*(double *)(*piVar8 + 0x18);
      }
      lVar19 = lVar19 + -1;
      piVar8 = piVar8 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar19 != 0);
    uVar15 = *(unsigned int *)(iVar2 + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    if ((*(unsigned int *)(((uVar15 >> 5) + 0x36) * 4 + param_1) & uVar7) == 0) {
      iVar2 = (uVar15 >> 5) * 4;
      *(unsigned int *)(iVar2 + param_1 + 0xd8) = *(unsigned int *)(iVar2 + param_1 + 0xd8) | uVar7;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635C30(uVar5,uVar15,afStack_70);
      return 0;
    }
    uVar5 = 0xffffffff82033110;
LAB_8293c8dc:
    fn_82937A60(param_1,uVar5,uVar15);
    return 0;
  }
  if (iVar2 == 0xf6) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff820332f4);
    }
    iVar2 = *(int *)(param_2 + 0x54);
    if (*(int *)(iVar2 + 0x10) != 7) {
      uVar5 = 0xffffffff8203318c;
      goto LAB_8293cbb0;
    }
    bVar6 = false;
    piVar8 = &iStack_80;
    piVar10 = (int *)(param_2 + 0x60);
    lVar19 = 4;
    do {
      iVar13 = *(int *)(*piVar10 + 0x10);
      if ((iVar13 == 2) || (iVar13 == 4)) {
        *piVar8 = *(int *)(*piVar10 + 0x18);
      }
      piVar10 = piVar10 + 1;
      piVar8 = piVar8 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    if ((iStack_80 < 0) || (0xff < iStack_80)) {
      fn_82937A60(param_1,0xffffffff820332b0);
      bVar6 = true;
    }
    if ((iStack_7c < 0) || (0xff < iStack_7c)) {
      fn_82937A60(param_1,0xffffffff82033268);
      bVar6 = true;
    }
    if ((iStack_78 < -0x80) || (0x7f < iStack_78)) {
      fn_82937A60(param_1,0xffffffff82033220);
      bVar6 = true;
    }
    if (iStack_74 != 0) {
      fn_82937A60(param_1,0xffffffff820331e4);
      bVar6 = true;
    }
    uVar15 = *(unsigned int *)(iVar2 + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    if ((*(unsigned int *)(((uVar15 >> 5) + 0x3e) * 4 + param_1) & uVar7) == 0) {
      if (bVar6) {
        return 0;
      }
      iVar2 = (uVar15 >> 5) * 4;
      *(unsigned int *)(iVar2 + param_1 + 0xf8) = uVar7 | *(unsigned int *)(iVar2 + param_1 + 0xf8);
      uVar5 = fn_8293C408(param_1,1);
      fn_82635BB0(uVar5,uVar15,&iStack_80);
      return 0;
    }
    uVar5 = 0xffffffff820331b4;
    goto LAB_8293c8dc;
  }
  if (iVar2 == 0xf7) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff82033370);
    }
    if (*(int *)(*(int *)(param_2 + 0x54) + 0x10) != 0xe) {
      uVar5 = 0xffffffff8203331c;
      goto LAB_8293cbb0;
    }
    uVar15 = *(unsigned int *)(*(int *)(param_2 + 0x54) + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    iVar2 = *(int *)(*(int *)(param_2 + 0x60) + 0x18);
    if ((*(unsigned int *)(((uVar15 >> 5) + 0x3f) * 4 + param_1) & uVar7) == 0) {
      iVar13 = (uVar15 >> 5) * 4;
      *(unsigned int *)(iVar13 + param_1 + 0xfc) = uVar7 | *(unsigned int *)(iVar13 + param_1 + 0xfc);
      uVar5 = fn_8293C408(param_1,1);
      fn_82635B30(uVar5,uVar15,iVar2 != 0);
      return 0;
    }
    uVar5 = 0xffffffff82033340;
    goto LAB_8293c8dc;
  }
  if (iVar2 != 0xf8) {
    return 0;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff8203367c);
  }
  iVar2 = *(int *)(param_2 + 0x54);
  iVar13 = *(int *)(iVar2 + 0x10);
  uVar14 = (unsigned __int64)(*(unsigned int *)(param_2 + 0x44) >> 0x16) & 1;
  uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x4c);
  uVar3 = uVar9 & 0xf;
  uVar16 = (unsigned __int64)(*(unsigned int *)(param_2 + 0x4c) >> 0x10) & 0xf;
  if ((*(unsigned int *)(param_2 + 0x44) & 0x800000) != 0) {
    uVar14 = 2;
  }
  uVar7 = *(unsigned int *)(iVar2 + 0x20);
  uVar18 = 0;
  do {
    uVar4 = uVar7 >> (uVar18 & 0x3f) & 7;
    if (uVar4 == 1) {
      uVar15 = uVar15 | 1;
    }
    else if (uVar4 == 2) {
      uVar15 = uVar15 | 2;
    }
    else if (uVar4 == 3) {
      uVar15 = uVar15 | 4;
    }
    else if (uVar4 == 4) {
      uVar15 = uVar15 | 8;
    }
    else {
      if (uVar4 == 5) {
        uVar5 = 0xffffffff820335d8;
        goto LAB_8293c61c;
      }
      if (uVar4 == 6) {
        uVar5 = 0xffffffff820335ec;
        goto LAB_8293c61c;
      }
      if (uVar4 == 7) {
        fn_82937A60(param_1,0xffffffff82033668);
      }
    }
    uVar18 = uVar18 + 3;
  } while ((int)uVar18 < 0xc);
  if ((*(int *)(param_1 + 0x40) == 0) && (iVar13 == 0)) {
    if ((uVar3 != 9) && ((uVar3 < 0xe || (0xf < uVar3)))) {
      uVar5 = 0xffffffff82033600;
      goto LAB_8293c61c;
    }
    uVar12 = (uVar9 & 0xf) * 0x10 + uVar16;
    uVar14 = uVar12 >> 5;
    uVar7 = 1 << ((unsigned int)uVar12 & 0x1f);
    if ((*(unsigned int *)(((int)uVar14 + 0x2d) * 4 + param_1) & uVar7) != 0) {
      if (uVar3 == 9) {
        uVar14 = 0xffffffff82031be0;
      }
      else if (uVar3 == 0xe) {
        uVar14 = 0xffffffff82031be8;
      }
      else {
        uVar14 = 0xffffffff82031bf4;
      }
      uVar5 = 0xffffffff820335b0;
      goto LAB_8293c69c;
    }
    iVar13 = (int)(uVar14 << 2);
    *(unsigned int *)(iVar13 + param_1 + 0xb4) = uVar7 | *(unsigned int *)(iVar13 + param_1 + 0xb4);
    uVar14 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x18);
    if (1 < uVar14) {
      uVar5 = 0xffffffff82033568;
      goto LAB_8293c61c;
    }
    iVar2 = *(unsigned int *)(iVar2 + 0x18) + param_1;
    bVar1 = *(unsigned char *)(iVar2 + 0xd4);
    uVar7 = bVar1 & uVar15;
    if (uVar7 == 0) {
      *(unsigned char *)(iVar2 + 0xd4) = bVar1 | (unsigned char)uVar15;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635DB8(uVar5,uVar14,uVar15,(uVar9 & 0xf) << 4 | uVar16);
      return 0;
    }
    uVar5 = 0xffffffff82033520;
  }
  else {
    uVar16 = (uVar14 << 4 | uVar3) << 4 | uVar16;
    uVar9 = (uVar9 & 0xe) >> 1;
    uVar7 = 1 << ((unsigned int)uVar16 & 0x1f);
    if ((*(unsigned int *)(((int)uVar9 + 0x21) * 4 + param_1) & uVar7) != 0) {
      uVar5 = 0xffffffff820334e0;
      goto LAB_8293c61c;
    }
    iVar13 = (int)(uVar9 << 2);
    *(unsigned int *)(iVar13 + param_1 + 0x84) = uVar7 | *(unsigned int *)(iVar13 + param_1 + 0x84);
    uVar14 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x18);
    iVar13 = *(int *)(param_1 + 0x44);
    cVar11 = (-(iVar13 != 0) & 3U) + 0x6f;
    if (0xf < uVar14) {
      uVar14 = (unsigned __int64)cVar11;
      uVar5 = 0xffffffff820334b4;
      uVar16 = uVar14;
      goto LAB_8293c69c;
    }
    if (uVar3 == 9) {
      uVar5 = 0xffffffff82033468;
LAB_8293c61c:
      fn_82937A60(param_1,uVar5);
      return 0xffffffff80004005;
    }
    if (uVar3 == 0xe) {
      uVar5 = 0xffffffff82033410;
      goto LAB_8293c61c;
    }
    if (*(unsigned int *)(iVar2 + 0x10) != (-(unsigned int)(iVar13 == 0) & 6)) {
      if (iVar13 == 0) {
        uVar14 = 0xffffffff82032788;
      }
      else {
        uVar14 = 0xffffffff82032780;
      }
      uVar16 = (unsigned __int64)cVar11;
      uVar5 = 0xffffffff820333d8;
      goto LAB_8293c69c;
    }
    iVar2 = *(unsigned int *)(iVar2 + 0x18) + param_1;
    bVar1 = *(unsigned char *)(iVar2 + 0xa4);
    uVar7 = bVar1 & uVar15;
    if (uVar7 == 0) {
      *(unsigned char *)(iVar2 + 0xa4) = bVar1 | (unsigned char)uVar15;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635D20(uVar5,uVar14,uVar15,uVar16);
      return 0;
    }
    uVar5 = 0xffffffff82033398;
  }
  uVar16 = ZEXT48((&lbl_8315ACF0)[uVar7]);
LAB_8293c69c:
  fn_82937A60(param_1,uVar5,uVar14,uVar16);
  return 0xffffffff80004005;
}
/* @@ end fn_8293C4C0 */

/* @@ begin fn_8293CBC8 */
extern unsigned int *auStack_80;
extern int fn_82635EE8();
extern void fn_82635FD0(int, int, int);
extern int fn_82936130();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern void fn_8293B260();
extern void fn_8293B3D8();
extern int fn_8293C408();
extern void fn_82A9F7E0(int, int, int, int, int, int, int);
extern unsigned int iStack_68;
extern unsigned int lbl_821CE368;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_8293CBC8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  int iVar17;
  int *piVar18;
  unsigned int uVar19;
  int iVar20;
  unsigned __int64 uVar21;
  int iVar22;
  unsigned char auStack_80 [8];
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned __int64 uStack_70;
  int iStack_68;
  
  *(unsigned int *)(param_1 + 300) = 0;
  uStack_78 = 0xe0000000;
  iVar2 = *(int *)(param_2 + 0x30);
  bVar4 = iVar2 == 3;
  bVar5 = iVar2 == 2;
  if ((iVar2 == 2) || (iVar2 == 4)) {
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0xf0) {
      bVar4 = true;
    }
    else {
      if (iVar2 == 0xf2) {
        *(unsigned int *)(param_2 + 0x34) = 2;
      }
      else {
        if (iVar2 != 0xf4) goto LAB_8293ccb0;
        *(unsigned int *)(param_2 + 0x34) = 0x1d;
      }
      *(unsigned int *)(param_2 + 100) = *(unsigned int *)(param_2 + 0x60);
    }
LAB_8293ccb0:
    if (!bVar4) {
      uVar21 = 0;
      uVar12 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x34) & 0x1f) << 0x18 | 0xe0000000;
      uStack_78 = (unsigned int)uVar12;
      uVar12 = (unsigned __int64)*(unsigned char *)(((unsigned char)(uVar12 >> 0x18) & 0x1f) + 0x8315accc);
      if (uVar12 != 0) {
        piVar18 = (int *)(param_2 + 0x60);
        do {
          if (*piVar18 != 0) {
            ((void (*)())fn_8293B260)(param_1,auStack_80,uVar21);
          }
          uVar21 = uVar21 + 1;
          piVar18 = piVar18 + 1;
        } while ((uVar21 & 0xffffffff) < uVar12);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if ((iVar2 != 3) && (iVar2 != 4)) goto LAB_8293cf98;
  iVar10 = *(int *)(param_2 + 0x38);
  bVar6 = false;
  uVar19 = -(unsigned int)(iVar2 != 3) & 2;
  iVar14 = (uVar19 + 0x18) * 4;
  iVar11 = *(int *)(iVar14 + param_2);
  if (iVar10 == 0xf1) {
    bVar5 = true;
  }
  else {
    if (iVar10 == 0xf3) {
      iVar10 = 5;
    }
    else if (iVar10 == 0xfc) {
      iVar10 = 0x17;
    }
    else {
      if (iVar10 != 0xfd) goto LAB_8293cd88;
      iVar10 = 0x18;
    }
    bVar6 = true;
  }
LAB_8293cd88:
  if ((bVar6) && (*(unsigned int *)(iVar11 + 0x24) != (*(unsigned int *)(iVar11 + 0x24) & 3) * 0x55)) {
LAB_8293cda4:
    uVar9 = 0xffffffff82033a28;
    goto LAB_8293cdac;
  }
  if ((bVar5) ||
     (((iVar2 != 3 && (2 < *(unsigned char *)(*(int *)(param_2 + 0x34) + -0x7cea5334))) ||
      (cVar1 = *(char *)(iVar10 + -0x7cea5368), cVar1 == '\0')))) goto LAB_8293cf98;
  uVar8 = *(unsigned int *)(iVar11 + 0x24);
  if (cVar1 == '\x01') {
    if ((unsigned int)LZCOUNT((uVar8 & 3) * 0x55 - uVar8) >> 5 == 0) goto LAB_8293cda4;
LAB_8293cea8:
    fn_8293B260(param_1,auStack_80,2,iVar11);
    if (cVar1 != '\x04') {
LAB_8293cf98:
      if (bVar4) {
        uStack_78 = uStack_78 & 0xe0ffffff | 0x2000000;
      }
      fn_8293B3D8(param_1,auStack_80,param_2);
      iVar2 = *(int *)(param_2 + 0x30);
      iVar17 = 0;
      iVar22 = 0;
      iVar20 = 0;
      uStack_70 = 0;
      iVar11 = 0;
      iStack_68 = 0;
      iVar10 = 0;
      iVar14 = 0;
      puVar13 = &uStack_74;
      do {
        if (iVar2 == 3) {
          if (iVar14 == 2) {
            iVar3 = *(int *)(param_2 + 0x60);
            goto LAB_8293d024;
          }
        }
        else {
          iVar3 = *(int *)((iVar14 + 0x18) * 4 + param_2);
LAB_8293d024:
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) == 2)) {
            if ((*(int *)(iVar3 + 0x14) == 0xb000000) || (*(int *)(iVar3 + 0x14) == 0xc000000)) {
              iVar11 = iVar11 + 1;
            }
            else {
              iVar10 = iVar10 + 1;
            }
            uVar16 = 0;
            if (*(int *)(iVar3 + 0x28) != 0) {
              if (*(int *)(*(int *)(iVar3 + 0x28) + 0x10) == 0xf) {
                iVar22 = iVar22 + 1;
              }
              else {
                iVar17 = iVar17 + 1;
              }
              uVar16 = 1;
            }
            puVar13 = puVar13 + 1;
            *puVar13 = uVar16;
            iVar20 = iVar20 + 1;
          }
        }
        iVar14 = iVar14 + 1;
        if (2 < iVar14) {
          if ((iVar11 != 0) && (iVar10 != 0)) {
            fn_82937A60(param_1,0xffffffff820337a8);
          }
          if ((iVar22 != 0) && (iVar17 != 0)) {
            fn_82937A60(param_1,0xffffffff82033730);
          }
          if ((((iVar20 == 3) && ((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) != iStack_68)) && ((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) != -1)) &&
             (iStack_68 != -1)) {
            fn_82937A60(param_1,0xffffffff820336a8);
          }
          uVar9 = fn_8293C408(param_1,1);
          uVar7 = fn_82635EE8(uVar9,auStack_80);
          if (*(int *)(param_2 + 0x50) != 0) {
            fn_82635FD0(uVar9,uVar7,1);
          }
          if (*(int *)(param_1 + 0x144) != 0) {
            fn_82A9F7E0(*(unsigned int *)(param_1 + 0x13c),1,uVar7,*(unsigned int *)(param_2 + 0x20)
                            ,*(unsigned int *)(param_2 + 0x24),0xffffffffffffffff,0);
          }
          return 0;
        }
      } while( true );
    }
    if (*(int *)(iVar11 + 0x10) == 2) {
      iVar2 = *(int *)((uVar19 + 0x19) * 4 + param_2);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) != 0)) {
        uVar9 = 0xffffffff82033830;
      }
      else {
        uVar19 = *(unsigned int *)(iVar11 + 0x24);
        uVar8 = uVar19 >> 6 & 3;
        if (uVar8 == (uVar19 & 3)) {
          fn_82937A60(param_1,0xffffffff820338f8,(&lbl_821CE368)[uVar8]);
          return 0xffffffff80004005;
        }
        if (*(int *)(*(int *)(iVar14 + param_2) + 0x14) == *(int *)(iVar2 + 0x14)) {
          uStack_78 = (*(unsigned int *)(iVar2 + 0x18) & 2) << 0x1c | uStack_78 & 0xdfffffff;
          goto LAB_8293cf98;
        }
        uVar9 = 0xffffffff82033888;
      }
    }
    else {
      uVar9 = 0xffffffff82033968;
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar15 = (uVar8 >> 2 & 3) * 0x54 | uVar8 & 3;
LAB_8293ce64:
      if ((unsigned int)LZCOUNT(uVar15 - uVar8) >> 5 != 0) {
LAB_8293ce98:
        uVar8 = fn_82936130(param_2,uVar19);
        *(unsigned int *)(iVar11 + 0x24) = uVar8;
        goto LAB_8293cea8;
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_8293ce98;
      if (uVar8 == (uVar8 & 3) * 0x55) {
        uVar8 = *(unsigned int *)(*(int *)((uVar19 + 0x19) * 4 + param_2) + 0x24);
        uVar15 = (uVar8 & 3) * 0x55;
        goto LAB_8293ce64;
      }
    }
    uVar9 = 0xffffffff820339c0;
  }
LAB_8293cdac:
  fn_82937A60(param_1,uVar9);
  return 0xffffffff80004005;
}
/* @@ end fn_8293CBC8 */

/* @@ begin fn_8293D1E0 */
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82635E70();
extern int fn_82635ED0();
extern void fn_82635FD0(int, int, int);
extern int fn_82936610();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern void fn_8293B978();
extern int fn_8293C408();
extern void fn_82A9F7E0(int, int, int, int, int, int, int);
extern unsigned int uStack_4c;


unsigned __int64 fn_8293D1E0(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_50 [4];
  unsigned int uStack_4c;
  int aiStack_48 [2];
  unsigned int auStack_40 [16];
  
  *(unsigned int *)(param_1 + 300) = 0;
  auStack_50[0] = 0;
  fn_82936610(param_2,auStack_40,aiStack_48,&uStack_4c,auStack_50,0xffffffff82937a60,param_1);
  iVar1 = *(int *)(param_2 + 0x34);
  fn_8293B978(param_1,auStack_40,param_2,iVar1);
  if (iVar1 == 2) {
    if (*(int *)(*(int *)(param_2 + 100) + 0x10) != -0x3eb) {
      fn_82937A60(param_1,0xffffffff82033ac4);
      return 0xffffffff80004005;
    }
    uVar4 = 0x5f - (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 100) + 0x18);
    auStack_40[0] =
         (unsigned int)(((uVar4 + ((uVar4 & 0xffffffff) / 3) * -3 & 3) << 5 |
                (uVar4 & 0xffffffff) / 3 & 0xffffffffffffff9f) << 0x14) & 0x7f00000 |
         auStack_40[0] & 0xf80fffff;
  }
  uVar2 = fn_8293C408(param_1,1);
  if (iVar1 == 0) {
    if (aiStack_48[0] == -1) {
      uVar2 = 0xffffffff82031830;
    }
    else {
      if (*(int *)(param_1 + 0x40) != 1) {
        uVar3 = fn_82635ED0(uVar2,auStack_40,aiStack_48[0],uStack_4c);
        goto LAB_8293d310;
      }
      uVar2 = 0xffffffff82033a8c;
    }
    fn_82937A60(param_1,uVar2);
  }
  else {
    uVar3 = fn_82635E70(uVar2,auStack_40,uStack_4c);
LAB_8293d310:
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82635FD0(uVar2,uVar3,1);
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      fn_82A9F7E0(*(unsigned int *)(param_1 + 0x13c),1,uVar3,*(unsigned int *)(param_2 + 0x20),
                      *(unsigned int *)(param_2 + 0x24),0xffffffffffffffff,0);
    }
  }
  return 0;
}
/* @@ end fn_8293D1E0 */

/* @@ begin fn_8293D368 */
extern void fn_82936B10(int, unsigned int *, unsigned char *, void *, int);
extern void fn_82937A60(int, char *);
extern void fn_8293B978(int, unsigned int *, int, int);
extern int fn_8293C408(int, int);
extern int fn_82635E18(int, unsigned int *);
extern void fn_82635FD0(int, int, int);
extern void fn_82A9F7E0(int, int, int, int, int, int, int);
int fn_8293D368(int param_1, int param_2)
{
  struct { char pad[16]; unsigned char flag; __declspec(align(8)) unsigned int st[2]; } L;
  int uVar1, uVar2;
  *(int *)(param_1 + 300) = 0;
  L.flag = 0;
  fn_82936B10(param_2, L.st, &L.flag, (void *)fn_82937A60, param_1);
  fn_8293B978(param_1, L.st, param_2, 3);
  if ((L.st[0] & 0x1f) <= 0x13) {
    if (*(int *)(*(int *)(param_2 + 100) + 0x10) != -0x3ea) {
      fn_82937A60(param_1, "Second source argument must be a texture fetch (tf) constant.");
      return 0x80004005;
    }
    L.st[0] = (*(unsigned int *)(*(int *)(param_2 + 100) + 0x18) & 0x1f) << 0x14 | L.st[0] & 0xfe0fffff;
  }
  uVar1 = fn_8293C408(param_1, 1);
  uVar2 = fn_82635E18(uVar1, L.st);
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82635FD0(uVar1, uVar2, 1);
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    fn_82A9F7E0(*(int *)(param_1 + 0x13c), 1, uVar2, *(int *)(param_2 + 0x20), *(int *)(param_2 + 0x24), -1, 0);
  }
  return 0;
}
/* @@ end fn_8293D368 */

/* @@ begin fn_8293D470 */
extern int fn_82635FE8();
extern int fn_82930318();
extern int fn_82930358();
extern int fn_82937188();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293C408();
extern unsigned int lbl_82031798;


void fn_8293D470(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  iVar1 = *(int *)((param_3 + 0x18) * 4 + param_2);
  if (*(int *)(iVar1 + 0x10) == 0x12) {
    iVar1 = *(int *)(iVar1 + 0x18);
    fn_8293C408(param_1,1);
    uVar2 = fn_82635FE8();
    for (iVar3 = *(int *)(param_1 + 0x148); (iVar3 != 0 && (*(int *)(iVar3 + 0x14) != iVar1));
        iVar3 = *(int *)(iVar3 + 0xc)) {
    }
    if (iVar3 == 0) {
      iVar3 = fn_82937188(param_1,iVar1,0xffffffffffffffff);
    }
    puVar4 = (unsigned int *)fn_82930318(0x18);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      fn_82930358(puVar4);
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0xffffffff;
      *puVar4 = &lbl_82031798;
    }
    puVar4[4] = uVar2;
    puVar4[3] = *(unsigned int *)(iVar3 + 8);
    *(unsigned int **)(iVar3 + 8) = puVar4;
  }
  else {
    fn_82937A60(param_1,0xffffffff82033b3c);
  }
  return;
}
/* @@ end fn_8293D470 */

/* @@ begin fn_8293D550 */
extern int fn_82635FE8();
extern int fn_82636118();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293C408();


void fn_8293D550(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x148);
  fn_8293C408(param_1,1);
  uVar4 = fn_82635FE8();
  if (iVar6 != 0) {
    do {
      uVar1 = *(unsigned int *)(iVar6 + 0x10);
      uVar3 = 0xffffffff82033b60;
      if (uVar1 == 0xffffffff) {
LAB_8293d5ac:
        fn_82937A60(param_1,uVar3,*(unsigned int *)(iVar6 + 0x14));
      }
      else {
        if (uVar4 <= uVar1) {
          uVar3 = 0xffffffff82033b88;
          goto LAB_8293d5ac;
        }
        iVar7 = *(int *)(iVar6 + 8);
        if (iVar7 != 0) {
          do {
            uVar2 = *(unsigned int *)(iVar7 + 0x10);
            uVar3 = fn_8293C408(param_1,1);
            puVar5 = (unsigned int *)fn_82636118(uVar3,uVar2);
            *puVar5 = *puVar5 & 0xffffe000 | uVar1 & 0x1fff;
            iVar7 = *(int *)(iVar7 + 0xc);
          } while (iVar7 != 0);
        }
      }
      iVar6 = *(int *)(iVar6 + 0xc);
    } while (iVar6 != 0);
  }
  *(unsigned int *)(param_1 + 0x148) = 0;
  return;
}
/* @@ end fn_8293D550 */

/* @@ begin fn_8293D620 */
extern int fn_826360E8();
extern int fn_82636148();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293C408();


void fn_8293D620(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int aiStack_50 [20];
  
  uVar3 = fn_8293C408(param_1,1);
  uVar4 = fn_826360E8();
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      puVar5 = (unsigned int *)fn_82636148(uVar3,uVar7,aiStack_50);
      if (puVar5 == (unsigned int *)0x0) {
        fn_82937A60(param_1,0xffffffff82033bcc);
        return;
      }
      if ((aiStack_50[0] == 0) && ((*puVar5 & 0x8000) != 0)) {
        uVar2 = (unsigned __int64)*puVar5 & 0x3f;
        if (*(int *)(param_1 + 0x40) == 1) {
          if (uVar2 < 4) {
LAB_8293d6c4:
            uVar1 = 1 << (unsigned int)uVar2;
            if ((uVar1 & uVar6) == 0) {
              uVar8 = uVar8 + 1;
              uVar6 = uVar1 | uVar6;
              if ((unsigned int)uVar9 < (unsigned int)uVar2) {
                uVar9 = uVar2;
              }
            }
          }
          else if (uVar2 == 0x3d) {
            *(unsigned int *)(param_1 + 0x120) = *(unsigned int *)(param_1 + 0x120) | 0x8000000;
          }
        }
        else if (uVar2 < 0x10) goto LAB_8293d6c4;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (uVar4 & 0xffffffff));
    uVar9 = uVar9 + 1;
    if ((uVar8 & 0xffffffff) != 0) goto LAB_8293d700;
  }
  uVar9 = 0;
LAB_8293d700:
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar6 = (unsigned int)(uVar9 << 0x1c) & 0x70000000 | *(unsigned int *)(param_1 + 0x120) & 0x8fffffff;
  }
  else {
    if ((*(unsigned int *)(param_1 + 0x60) & 8) == 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 & 0xffffffff) != 0) {
      uVar9 = uVar9 - 1;
    }
    uVar6 = (unsigned int)((uVar9 & 0xffffffff) << 0x14) & 0xf00000 |
            *(unsigned int *)(param_1 + 0x120) & 0xff0fffff;
  }
  *(unsigned int *)(param_1 + 0x120) = uVar6;
  return;
}
/* @@ end fn_8293D620 */

/* @@ begin fn_8293D760 */
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_826355E8();
extern int fn_82635FE8();
extern int fn_826360E8();
extern int fn_82936530();
extern int fn_82937188();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned __int64 fn_8293AC38();
extern unsigned __int64 fn_8293B0B0();
extern int fn_8293B1B8();
extern int fn_8293C408();
extern void fn_8293D470();
extern void fn_82A9F7E0(int, int, int, int, int, int, int);


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_8293D760(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  int iVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_60 [2];
  unsigned char auStack_58 [88];
  
  uVar8 = 0;
  *(unsigned int *)(param_1 + 300) = 0;
  bVar2 = true;
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff82033d3c);
  }
  uVar1 = *(unsigned int *)(param_2 + 0x34);
  if ((*(int *)(param_2 + 0x5c) != 0) &&
     ((uVar1 == 0 || (((2 < uVar1 && (uVar1 != 8)) && ((uVar1 < 0xfa || (0xfb < uVar1)))))))) {
    fn_82937A60(param_1,0xffffffff82033d14);
  }
  fn_8293C408(param_1,1);
  fn_826360E8();
  if ((1 << (uVar1 & 0x3f) & 0x4014U) != 0) {
    *(unsigned int *)(param_1 + 0x130) = 1;
  }
  if (0x1e < uVar1) {
    if (uVar1 == 0xfa) {
      fn_8293D470(param_1,param_2,0);
      uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033c80,1);
      if ((uVar3 & 0xffffffff) == 0) goto LAB_8293dcf0;
      auStack_60[0] = 0;
      iVar6 = fn_82936530(uVar3,auStack_60);
      if (-1 < iVar6) goto LAB_8293dcf0;
      fn_82937A60(param_1,0xffffffff82033c4c);
code_r0x8293dce8:
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      goto LAB_8293dcf0;
    }
    if (uVar1 != 0xfb) goto LAB_8293dcf0;
    uVar4 = 0;
    goto LAB_8293db20;
  }
  if (uVar1 == 0x1e) {
    bVar2 = false;
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 0x12) {
      fn_82937A60(param_1,0xffffffff82033bf0);
      return 0xffffffff80004005;
    }
    iVar6 = *(int *)(*(int *)(param_2 + 0x60) + 0x18);
    fn_8293C408(param_1,1);
    uVar5 = fn_82635FE8();
    iVar7 = *(int *)(param_1 + 0x148);
    if (iVar7 != 0) {
      do {
        if (*(int *)(iVar7 + 0x14) == iVar6) break;
        iVar7 = *(int *)(iVar7 + 0xc);
      } while (iVar7 != 0);
      if (iVar7 != 0) {
        if (*(int *)(iVar7 + 0x10) != -1) {
          fn_82937A60(param_1,0xffffffff82033bdc,iVar6);
          return 0xffffffff80004005;
        }
        *(unsigned int *)(iVar7 + 0x10) = uVar5;
        goto LAB_8293dcf0;
      }
    }
    fn_82937188(param_1,iVar6);
    goto LAB_8293dcf0;
  }
  switch(uVar1) {
  case 1:
    fn_8293B1B8(param_1,param_2);
    break;
  case 2:
    fn_8293B1B8(param_1,param_2);
    break;
  case 3:
  case 4:
  case 0xd:
  case 0xe:
    fn_8293B1B8(param_1,param_2);
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) == 0xe) break;
    uVar4 = 0xffffffff82033cec;
    goto code_r0x8293d958;
  case 7:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 7) {
      fn_82937A60(param_1,0xffffffff82033cc0);
    }
    fn_8293D470(param_1,param_2,1);
    uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033cb8,1);
    if ((uVar3 & 0xffffffff) == 0) break;
    auStack_60[0] = 0;
    iVar6 = fn_82936530(uVar3,auStack_60);
    if (-1 < iVar6) break;
    uVar4 = 0xffffffff82033c8c;
code_r0x8293d958:
    fn_82937A60(param_1,uVar4);
    break;
  case 8:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 7) {
      fn_82937A60(param_1,0xffffffff82033cc0);
    }
    fn_8293D470(param_1,param_2,1);
    break;
  case 9:
code_r0x8293dac8:
    goto code_r0x8293dacc;
  case 0xb:
    uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033c80,1);
    if ((uVar3 & 0xffffffff) == 0) goto code_r0x8293dac8;
    auStack_60[0] = 0;
    iVar6 = fn_82936530(uVar3,auStack_60);
    if (iVar6 < 0) {
      fn_82937A60(param_1,0xffffffff82033c4c);
      goto code_r0x8293dac8;
    }
code_r0x8293dacc:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 0xe) {
      fn_82937A60(param_1,0xffffffff82033c20);
    }
    uVar4 = 1;
LAB_8293db20:
    fn_8293D470(param_1,param_2,uVar4);
    break;
  case 0xc:
    uVar8 = fn_8293AC38(param_1,auStack_58,param_2);
    goto code_r0x8293dce8;
  }
LAB_8293dcf0:
  if (bVar2) {
    uVar4 = fn_8293C408(param_1,1);
    uVar4 = fn_826355E8(uVar4,auStack_58);
    if (*(int *)(param_1 + 0x144) != 0) {
      fn_82A9F7E0(*(unsigned int *)(param_1 + 0x13c),0,uVar4,*(unsigned int *)(param_2 + 0x20),
                      *(unsigned int *)(param_2 + 0x24),0xffffffffffffffff,0);
    }
  }
  return uVar8;
}
/* @@ end fn_8293D760 */

/* @@ begin fn_8293DD48 */
extern void fn_8293D620(Obj_8293DD48 *o);
extern void fn_82937A60(void *self, const char *fmt, ...);
extern unsigned fn_8293C408(Obj_8293DD48 *o, int a);
extern void fn_82635A70(unsigned a, unsigned b, unsigned c);

int fn_8293DD48(Obj_8293DD48 *o)
{
  if (o->f138 == 0) return 0x8007000e;
  fn_8293D620(o);
  if ((o->f60 & 0x80) == 0) {
    if ((o->f128 & 4) != 0) fn_82937A60(o, "You must config AutoResource=false in order to config VsResource");
    if ((o->f128 & 8) != 0) fn_82937A60(o, "You must config AutoResource=false in order to config PsResource");
    if ((o->f128 & 0x10000) != 0) fn_82937A60(o, "You must config AutoResource=false in order to config TxCacheSelect");
  }
  {
    unsigned f = o->f128;
    if ((f & 0x2000) != 0) o->f120 = o->f120 | 0x40000;
    if ((f & 0x2000) == 0) {
      if ((f & 0x20) != 0 && (o->f120 & 0x80000) != 0)
        fn_82937A60(o, "You must specify PsParamGenReg if you set PsGenIndex to true.");
      if ((o->f128 & 0x1000) != 0 && (o->f124 & 2) != 0)
        fn_82937A60(o, "You must specify PsParamGenReg if you set PsGenScreenXY to true.");
    }
  }
  if (o->f34 != 0) return 0x88760b59;
  {
    unsigned r = fn_8293C408(o, 1);
    fn_82635A70(r, o->f120, o->f124);
  }
  return 0;
}
/* @@ end fn_8293DD48 */

/* @@ begin fn_8293DE90 */
extern unsigned int *auStack_250;
extern unsigned int *auStack_470;
extern void fn_82635A58(void);
extern int fn_82635A90();
extern int fn_82635AB8();
extern int fn_82635F08();
extern int fn_82635FE8();
extern int fn_826361D8();
extern int fn_82636230();
extern int fn_826362C0();
extern int fn_82636E10();
extern int fn_828F9A60();
extern int fn_828FA8D8();
extern int fn_828FAB00();
extern int fn_82936358();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293C408();
extern int fn_8293DD48();
extern int fn_82A2A288();
extern int fn_82A9A238();
extern int fn_82A9EDA0();
extern int fn_82AA5540();
extern int fn_82AA7460();
extern int fn_82BA02A8();
extern int fn_82D7E470();
extern unsigned int iStack_454;
extern unsigned int uStack_460;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_8293DE90(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int *piStack_480;
  int aiStack_47c [3];
  unsigned char auStack_470 [16];
  unsigned int uStack_460;
  unsigned int *puStack_45c;
  short sStack_458;
  int iStack_454;
  unsigned char auStack_250 [592];
  
  uVar2 = ((unsigned __int64 (*)())fn_8293DD48)();
  if (-1 < (int)uVar2) {
    if ((param_1[0x18] & 0x40) != 0) {
      if (param_1[0x4d] == 0) {
        fn_82937A60(param_1,0xffffffff82033f80);
        return 0xffffffff88760b59;
      }
      fn_8293C408(param_1,1);
      fn_82635A58();
    }
    iVar1 = param_1[0x4f];
    if (iVar1 != 0) {
      uVar3 = fn_82BA02A8(iVar1);
      uVar4 = fn_8293C408(param_1,1);
      fn_82635AB8(uVar4,uVar3);
    }
    fn_8293C408(param_1,1);
    fn_826361D8();
    if (param_1[0x51] != 0) {
      fn_8293C408(param_1,1);
      lVar5 = fn_82635FE8();
      fn_82A9A238(param_1[0x4f],(lVar5 + 1U & 0xffffffff) >> 1);
    }
    if (param_1[0x51] != 0) {
      if (param_3[2] != 0) {
        fn_82A2A288(0xfde9,0,param_3[2],0xffffffffffffffff,auStack_250,0x104);
        uVar3 = fn_8293C408(param_1,1);
        fn_82635F08(uVar3,param_3[1],param_3[2]);
      }
      fn_82A9EDA0(param_1[0x4f],auStack_470);
      uVar3 = fn_8293C408(param_1,1);
      fn_82635A90(uVar3,auStack_470);
    }
    fn_8293C408(param_1,1);
    uVar3 = fn_82636230();
    uVar2 = fn_828F9A60(uVar3,&piStack_480);
    if (-1 < (int)uVar2) {
      aiStack_47c[1] = 0;
      uVar3 = fn_8293C408(param_1,1);
      uVar4 = (**(int (***)())(*piStack_480 + 0x10))(piStack_480);
      uVar6 = (**(int (***)())(*piStack_480 + 0xc))(piStack_480);
      uVar2 = fn_826362C0(uVar3,uVar6,uVar4,aiStack_47c + 1);
      if (-1 < (__int64)uVar2) {
        if (iVar1 != 0) {
          uVar3 = (**(int (***)())(*piStack_480 + 0xc))();
          fn_82636E10(uVar3,iVar1,0xffffffff82a9ee10);
        }
        if (((param_3 != (unsigned int *)0x0) && ((*param_3 & 4) != 0)) &&
           (uVar2 = fn_82AA7460(param_1[0xc],piStack_480,param_1[0x19],param_2,param_1,
                                    0xffffffff829361e8,param_3), uVar2 == 0)) {
          (**(int (***)())(*piStack_480 + 8))();
          return 0;
        }
      }
      if ((uVar2 & 0xffffffff) == 0x88760b81) {
        fn_82937A60(param_1,0xffffffff82033f30);
        uVar2 = 0xffffffff80004005;
      }
      *param_2 = piStack_480;
      if ((-1 < (int)uVar2) && ((param_1[0x19] & 2) == 0)) {
        uVar7 = 0;
        aiStack_47c[0] = 0;
        if (param_3 != (unsigned int *)0x0) {
          uVar7 = (param_3[4] & 0x7f) << 10;
        }
        if ((param_1[0x19] & 0x80000) != 0) {
          uVar7 = uVar7 | 0x40000;
        }
        uVar3 = (**(int (***)())(*piStack_480 + 0x10))();
        uVar4 = (**(int (***)())(*piStack_480 + 0xc))(piStack_480);
        uVar2 = fn_82D7E470(uVar4,uVar3,uVar7,0,0xffffffff82aa0550,aiStack_47c);
        if (((__int64)uVar2 < 0) || (aiStack_47c[0] != 0)) {
          uStack_460 = *param_1;
          puStack_45c = param_1 + 4;
          iStack_454 = -((int)uVar2 >> 0x1f);
          sStack_458 = 0;
          if ((int)uVar2 < 0) {
            uVar3 = 0xffffffff82033f00;
          }
          else {
            uVar3 = 0xffffffff82033ecc;
          }
          if (iStack_454 == 0) {
            fn_828FAB00(uStack_460,puStack_45c,0x1bbe,0xffffffff821c4da8,uVar3);
          }
          else {
            fn_828FA8D8(uStack_460,puStack_45c,0x1bbd);
          }
          uVar3 = (**(int (***)())(*piStack_480 + 0x10))();
          uVar4 = (**(int (***)())(*piStack_480 + 0xc))(piStack_480);
          fn_82D7E470(uVar4,uVar3,uVar7,0,0xffffffff82936440,&uStack_460);
          if (sStack_458 != 0) {
            fn_82936358(&uStack_460);
          }
          uVar3 = (**(int (***)())(*piStack_480 + 0x10))();
          uVar4 = (**(int (***)())(*piStack_480 + 0xc))(piStack_480);
          fn_82AA5540(uVar4,uVar3,0x44,0xffffffff82936440,&uStack_460,0,0);
          if (sStack_458 != 0) {
            fn_82936358(&uStack_460);
          }
        }
      }
    }
  }
  return uVar2;
}
/* @@ end fn_8293DE90 */

/* @@ begin fn_8293E2D0 */
extern void fn_82635A58(void);
extern int fn_82635FE8(void);
extern void fn_829370D8(Sh_8293E2D0 *);
extern void fn_82937A60(Sh_8293E2D0 *, const char *, ...);
extern unsigned int fn_8293C408();
extern void fn_8293D550(Sh_8293E2D0 *);
extern int fn_8293DD48();
extern void fn_82F54250(int, unsigned);

int fn_8293E2D0(Sh_8293E2D0 *s, Dc_8293E2D0 *d)
{
  int hr = 0;
  int n;
  unsigned half;
  int h;

  if (d->f50 != 0) {
    fn_82937A60(s, "ZPass statements cannot be serialized.");
    hr = 0x80004005;
  }
  if ((s->flags & 0x40) == 0) {
    fn_82937A60(s, "A zpass statement is only valid after a config AutoZ=true statement.");
    hr = 0x80004005;
  }
  if (s->f134 != 0) {
    fn_82937A60(s, "Only one zpass statement is allowed in a shader.");
    hr = 0x80004005;
  }
  if (s->f48 != 0) {
    fn_82937A60(s, "The zpass statement is not allowed in an inline microcode shader.");
    hr = 0x80004005;
  }
  if (hr >= 0) {
    fn_8293D550(s);
    s->f134 = 1;
    fn_8293DD48(s);
    fn_8293C408(s, 1);
    fn_82635A58();
    fn_8293C408(s, 1);
    n = fn_82635FE8();
    half = (unsigned)(n + 1) >> 1;
    if (s->f13c != 0) {
      fn_82F54250(s->f13c, half);
    }
    s->f58 = s->f58 + 1;
    fn_829370D8(s);
  }
  return hr;
}
/* @@ end fn_8293E2D0 */

/* @@ begin fn_8293E3E8 */
extern void fn_82937A60(void *self, const char *fmt, ...);
extern __int64 fn_8293BF58();
extern unsigned __int64 fn_8293C4C0();
extern unsigned __int64 fn_8293CBC8();
extern unsigned __int64 fn_8293D1E0();
extern int fn_8293D368();
extern unsigned __int64 fn_8293D760();
extern int fn_8293E2D0();


unsigned __int64 fn_8293E3E8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (uVar1 < 9) {
      if (uVar1 == 0) {
        uVar2 = ((int (*)())fn_8293D368)();
      }
      else if (uVar1 == 1) {
        uVar2 = ((unsigned __int64 (*)())fn_8293D1E0)();
      }
      else if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
        uVar2 = ((unsigned __int64 (*)())fn_8293CBC8)();
      }
      else if (uVar1 == 5) {
        uVar2 = ((unsigned __int64 (*)())fn_8293D760)();
      }
      else if (uVar1 == 6) {
        uVar2 = ((__int64 (*)())fn_8293BF58)();
      }
      else if (uVar1 == 7) {
        uVar2 = ((unsigned __int64 (*)())fn_8293C4C0)();
      }
      else {
        uVar2 = ((int (*)())fn_8293E2D0)();
      }
    }
  }
  else {
    if (uVar1 == 6) {
      uVar2 = 0xffffffff820340b8;
    }
    else if (uVar1 == 7) {
      if (*(int *)(param_2 + 0x34) == 0xf8) {
        uVar2 = 0xffffffff820340f0;
      }
      else {
        uVar2 = 0xffffffff82034124;
      }
    }
    else {
      if (uVar1 != 8) {
        return 0;
      }
      uVar2 = 0xffffffff82034158;
    }
    fn_82937A60(param_1,uVar2);
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}
/* @@ end fn_8293E3E8 */

/* @@ begin fn_8293E4E8 */
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82635A30();
extern int fn_82635CC8();
extern int fn_828FA8D8();
extern int fn_82930318();
extern int fn_82930478();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82935720();
extern int fn_82935BA0();
extern int fn_82935E28();
extern int fn_82936020();
extern void fn_82937A60(void *self, const char *fmt, ...);
extern int fn_8293A1A8();
extern int fn_8293A7B0();
extern void fn_8293BBD8();
extern unsigned __int64 fn_8293E3E8();
extern int fn_829B3208();
extern int fn_829B32E8();
extern int fn_829B3508();
extern unsigned int uStack_88;


void fn_8293E4E8(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  float fVar1;
  unsigned int uVar3;
  float fVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  int iVar12;
  double dVar13;
  float afStack_90 [2];
  unsigned __int64 uStack_88;
  float afStack_80 [32];
  
  fVar11 = afStack_80[0];
  if (param_1[0xe] != 0) {
    return;
  }
  if (param_3 != 0) {
    pfVar10 = afStack_80 + param_3;
    uVar8 = param_3;
    do {
      iVar5 = param_1[0xc];
      uVar8 = uVar8 - 1;
      pfVar10 = pfVar10 + -1;
      if (iVar5 == 0) {
        fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff82029604);
        param_1[0xd] = 1;
        return;
      }
      fVar4 = *(float *)(iVar5 + 8);
      param_1[0xc] = *(unsigned int *)(iVar5 + 0xc);
      *pfVar10 = fVar4;
      *(unsigned int *)(iVar5 + 8) = 0;
      *(unsigned int *)(iVar5 + 0xc) = 0;
    } while (uVar8 != 0);
  }
  fVar4 = 0.0;
  switch(param_2) {
  case 0:
  case 7:
    goto code_r0x8293e6a4;
  case 1:
  case 2:
  case 4:
  case 5:
  case 0xb:
  case 0xd:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x38:
  case 0x3e:
  case 0x44:
  case 0x45:
  case 0x4a:
  case 0x4b:
    fVar4 = fVar11;
    break;
  case 3:
    fVar4 = (float)fn_82930478(afStack_80[1],afStack_80[0]);
    break;
  case 6:
    fVar4 = fVar11;
    if (param_1[0x20] != 0) {
      if (param_1[0x12] == 0) {
        if (param_1[0x15] == 0) {
          param_1[0x15] = 1;
          fn_8293BBD8(param_1);
          fn_82635A30(param_1[0x4e],param_1[0x18]);
        }
        uVar3 = param_1[0x4e];
        uVar6 = (**(int (***)())(*(int *)param_1[0x20] + 0x10))();
        uVar7 = (**(int (***)())(*(int *)param_1[0x20] + 0xc))((int *)param_1[0x20]);
        fn_82635CC8(uVar3,uVar7,uVar6);
      }
      else {
        fn_82937A60(param_1,0xffffffff82034198);
      }
      if ((int *)param_1[0x20] != (int *)0x0) {
        (**(int (***)())(*(int *)param_1[0x20] + 8))();
        param_1[0x20] = 0;
      }
    }
    break;
  case 8:
    if (param_1[0x47] == 0) {
      param_1[0x47] = *(unsigned int *)((int)afStack_80[0] + 0x18);
    }
    goto code_r0x8293e6a4;
  case 9:
    goto code_r0x8293e6b0;
  case 10:
    *(unsigned int *)((int)afStack_80[0] + 0x50) = 1;
code_r0x8293e6b0:
    ((unsigned __int64 (*)())fn_8293E3E8)(param_1);
    fVar4 = fVar11;
    break;
  case 0xc:
    fVar4 = (float)fn_8293A7B0(param_1,afStack_80[0],afStack_80[1]);
    break;
  case 0xe:
    *(float *)((int)afStack_80[1] + 0x5c) = afStack_80[0];
    fVar4 = afStack_80[1];
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1f:
  case 0x21:
  case 0x23:
    afStack_80[0] = 0.0;
    if (1 < param_3) {
      fn_829B32E8(fVar11,afStack_80[1]);
      afStack_80[1] = 0.0;
    }
    fVar4 = fVar11;
    if (2 < param_3) {
      iVar5 = param_3 - 2;
      pfVar10 = afStack_80 + 1;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
        iVar5 = iVar5 + -1;
        fVar4 = fVar11;
      } while (iVar5 != 0);
    }
    break;
  case 0x18:
  case 0x19:
  case 0x27:
    afStack_80[0] = 0.0;
    fVar4 = fVar11;
    if (1 < param_3) {
      iVar5 = param_3 - 1;
      pfVar10 = afStack_80;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
        iVar5 = iVar5 + -1;
        fVar4 = fVar11;
      } while (iVar5 != 0);
    }
    break;
  case 0x1a:
  case 0x24:
    *(float *)((int)afStack_80[0] + 0x70) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1b:
    *(float *)((int)afStack_80[0] + 0x54) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1c:
  case 0x25:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1d:
    *(float *)((int)afStack_80[0] + 0x54) = afStack_80[1];
    goto code_r0x8293e7b0;
  case 0x1e:
  case 0x26:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    goto code_r0x8293e7b0;
  case 0x20:
  case 0x22:
    afStack_80[0] = 0.0;
    if (1 < param_3) {
      fn_829B32E8(fVar11,afStack_80[1]);
      afStack_80[1] = 0.0;
    }
    uVar8 = 2;
    if (2 < param_3 - 1) {
      pfVar10 = afStack_80 + 1;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        uVar8 = uVar8 + 1;
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
      } while (uVar8 < param_3 - 1);
    }
    afStack_80[2] = *(float *)((int)&uStack_88 + param_3 * 4 + 4);
    *(unsigned int *)((int)&uStack_88 + param_3 * 4 + 4) = 0;
code_r0x8293e7b0:
    *(float *)((int)fVar11 + 0x70) = afStack_80[2];
    fVar4 = fVar11;
    break;
  case 0x28:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    *(float *)((int)afStack_80[0] + 100) = afStack_80[2];
    *(float *)((int)afStack_80[0] + 0x70) = afStack_80[3];
    fVar4 = fVar11;
    break;
  case 0x29:
    fVar4 = 0.0;
    while (fVar1 = fVar11, fVar1 != 0.0) {
      fVar11 = *(float *)((int)fVar1 + 0xc);
      *(float *)((int)fVar1 + 0xc) = fVar4;
      fVar4 = fVar1;
    }
    break;
  case 0x2a:
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar11 = afStack_80[0];
      fVar4 = 0.0;
code_r0x8293e898:
      uVar6 = 0xffffffff82034190;
code_r0x8293e8a0:
      fVar4 = (float)fn_829304E0(uVar2,fVar11,fVar4,uVar6);
      break;
    }
    goto code_r0x8293e6a4;
  case 0x2b:
    uVar2 = fn_82930318(0x14);
    fVar11 = afStack_80[1];
    fVar4 = afStack_80[0];
    if ((uVar2 & 0xffffffff) != 0) goto code_r0x8293e898;
    goto code_r0x8293e6a4;
  case 0x2c:
    if ((param_1[0x12] != 0) && (*(int *)((int)afStack_80[0] + 4) == 3)) {
      iVar12 = (int)afStack_80[0] + 0x10;
      iVar5 = fn_82935720(iVar12,&uStack_88,afStack_90);
      if ((iVar5 == 0) &&
         (iVar5 = (*(int (**)())param_1[0x14])(param_1[0x13],iVar12,0,afStack_90), iVar5 == 0)) {
        fVar11 = afStack_90[0];
      }
    }
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = 0.0;
      uVar6 = 0xffffffff821a7a58;
      goto code_r0x8293e8a0;
    }
    goto code_r0x8293e6a4;
  case 0x2d:
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar6 = 0xffffffff821a7a58;
      fVar4 = afStack_80[1];
      fVar11 = afStack_80[0];
      goto code_r0x8293e8a0;
    }
code_r0x8293e6a4:
    fVar4 = 0.0;
    break;
  case 0x2f:
    fVar4 = fVar11;
    if (((param_1[0x12] != 0) && (*(int *)((int)afStack_80[0] + 4) == 3)) &&
       (iVar5 = (*(int (**)())param_1[0x14])(param_1[0x13],(int)afStack_80[0] + 0x10,0,afStack_90),
       iVar5 == 0)) {
      fVar4 = afStack_90[0];
    }
    break;
  case 0x33:
    if (*(int *)((int)afStack_80[0] + 0x1c) == 0) {
      uVar3 = fn_82935E28(param_1,(int)afStack_80[1] + 0x10);
      *(unsigned int *)((int)fVar11 + 0x20) = uVar3;
      fVar4 = fVar11;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202ce10);
      param_1[0xd] = 1;
      *(unsigned int *)((int)fVar11 + 0x20) = 0x8d1;
      fVar4 = fVar11;
    }
    break;
  case 0x35:
    if (*(int *)((int)afStack_80[0] + 0x14) == 0) {
      uVar3 = 0xd000000;
      fVar4 = afStack_80[0];
      goto code_r0x8293ea2c;
    }
    uVar6 = 0x7e2;
    uVar7 = 0xffffffff8202cde8;
    fVar4 = afStack_80[0];
    goto code_r0x8293eb64;
  case 0x36:
    if (*(int *)((int)afStack_80[0] + 0x14) == 0) {
      uVar3 = 0x1000000;
      fVar4 = afStack_80[0];
    }
    else {
      fVar4 = fVar11;
      if (*(int *)((int)afStack_80[0] + 0x14) != 0xb000000) break;
      uVar3 = 0xc000000;
      fVar4 = afStack_80[0];
    }
code_r0x8293ea2c:
    *(unsigned int *)((int)fVar4 + 0x14) = uVar3;
    break;
  case 0x37:
    if (*(int *)((int)afStack_80[0] + 0x18) == 1) {
      if (*(int *)((int)afStack_80[1] + 0x14) == 0) {
        uVar3 = 0x6000000;
        fVar4 = afStack_80[1];
        goto code_r0x8293ea2c;
      }
      uVar6 = 0x7dc;
      uVar7 = 0xffffffff8202cd68;
      fVar4 = afStack_80[1];
    }
    else {
      uVar6 = 0x7da;
      uVar7 = 0xffffffff8202cd98;
      fVar4 = afStack_80[1];
    }
    goto code_r0x8293eb64;
  case 0x39:
    if (*(int *)((int)afStack_80[0] + 0x1c) == 0) {
      uVar3 = fn_82936020(param_1,(int)afStack_80[1] + 0x10);
      *(unsigned int *)((int)fVar11 + 0x24) = uVar3;
      fVar4 = fVar11;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202cd10);
      param_1[0xd] = 1;
      *(unsigned int *)((int)fVar11 + 0x24) = 0xe4;
      fVar4 = fVar11;
    }
    break;
  case 0x3c:
    fVar11 = 0.0;
    goto code_r0x8293eafc;
  case 0x3d:
    fVar11 = afStack_80[1];
code_r0x8293eafc:
    fVar4 = (float)fn_8293A1A8(param_1,(int)afStack_80[0] + 0x10,fVar11);
    goto code_r0x8293ed84;
  case 0x3f:
    *(int *)((int)afStack_80[0] + 0x18) =
         *(int *)((int)afStack_80[1] + 0x18) + *(int *)((int)afStack_80[0] + 0x18);
    if (*(int *)((int)afStack_80[0] + 0x28) == 0) {
      *(unsigned int *)((int)afStack_80[0] + 0x28) = *(unsigned int *)((int)afStack_80[1] + 0x28);
      *(unsigned int *)((int)afStack_80[1] + 0x28) = 0;
      fVar4 = fVar11;
      break;
    }
    fVar4 = fVar11;
    if (*(int *)((int)afStack_80[1] + 0x28) == 0) break;
    uVar6 = 0x7d9;
    uVar7 = 0xffffffff8202ccc0;
    fVar4 = afStack_80[0];
code_r0x8293eb64:
    fn_828FA8D8(*param_1,param_1 + 4,uVar6,uVar7);
    param_1[0xd] = 1;
    break;
  case 0x40:
    uVar2 = fn_82930318(0x50);
    if ((uVar2 & 0xffffffff) == 0) goto code_r0x8293ed80;
    uVar3 = 0;
    fVar11 = afStack_80[0];
code_r0x8293eb90:
    fVar4 = (float)fn_829B3508(uVar2,param_1 + 4,0,0,uVar3,0,fVar11);
    goto code_r0x8293ed84;
  case 0x41:
    uVar2 = fn_82930318(0x50);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = *(unsigned int *)((int)afStack_80[0] + 0x18);
      fVar11 = 0.0;
      goto code_r0x8293eb90;
    }
    goto code_r0x8293ed80;
  case 0x42:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
    }
    fn_82935BA0(param_1,fVar4);
    *(unsigned int *)((int)fVar4 + 0x18) = 1;
    goto code_r0x8293ebfc;
  case 0x43:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
    }
    fn_82935BA0(param_1,fVar4);
    *(unsigned int *)((int)fVar4 + 0x18) = 0;
code_r0x8293ebfc:
    *(unsigned int *)((int)fVar4 + 0x10) = 2;
    break;
  case 0x46:
    *(int *)((int)afStack_80[0] + 0x18) = -*(int *)((int)afStack_80[0] + 0x18);
    fVar4 = fVar11;
    break;
  case 0x47:
  case 0x48:
    uStack_88 = (unsigned __int64)*(unsigned int *)((int)afStack_80[0] + 0x18);
    *(unsigned int *)((int)afStack_80[0] + 0x10) = 5;
    dVar13 = (double)uStack_88;
    goto code_r0x8293ec74;
  case 0x49:
    uStack_88 = (unsigned __int64)*(unsigned int *)((int)afStack_80[0] + 0x18);
    *(unsigned int *)((int)afStack_80[0] + 0x10) = 5;
    dVar13 = -(double)uStack_88;
code_r0x8293ec74:
    *(double *)((int)afStack_80[0] + 0x18) = dVar13;
    fVar4 = fVar11;
    break;
  case 0x4c:
    fVar4 = (float)*(double *)((int)afStack_80[0] + 0x18);
    if (fVar4 == 0.0) {
      afStack_90[0] = -0.0;
    }
    else if (fVar4 == -0.0) {
      afStack_90[0] = 0.0;
    }
    else {
      afStack_90[0] = INFINITY;
      if (((unsigned int)fVar4 & 0x7f800000) == 0x7f800000) {
        if (fVar4 == INFINITY) {
          afStack_90[0] = -INFINITY;
        }
        else if ((fVar4 != -INFINITY) && (afStack_90[0] = -(_seed_nan), fVar4 != -(_seed_nan)))
        goto code_r0x8293ed1c;
      }
      else {
code_r0x8293ed1c:
        afStack_90[0] = -fVar4;
      }
    }
    *(double *)((int)afStack_80[0] + 0x18) = (double)afStack_90[0];
    fVar4 = fVar11;
    break;
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    uVar2 = fn_82930318(0x78);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = (float)fn_829B3208(uVar2,param_1 + 4,param_1[0x1a],param_1[0x1b],param_1[0x1c],
                                       param_1[0x1d],param_1[0x1e]);
      goto code_r0x8293ed84;
    }
    goto code_r0x8293ed80;
  case 0x60:
  case 0x61:
  case 0x62:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
      goto code_r0x8293ed84;
    }
code_r0x8293ed80:
    fVar4 = 0.0;
code_r0x8293ed84:
    fn_82935BA0(param_1,fVar4);
  }
  if (param_1[0xe] == 0) {
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_829304E0(uVar2,fVar4,param_1[0xc],0xffffffff820295d0);
    }
    if (iVar5 == 0) {
      fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff820295b0);
      param_1[0xe] = 1;
      param_1[0xd] = 1;
    }
    else {
      param_1[0xc] = iVar5;
    }
  }
  return;
}
/* @@ end fn_8293E4E8 */

/* @@ begin fn_8293EE00 */
extern int fn_82937A10();
extern unsigned __int64 fn_8293BCC0();
extern void fn_8293E4E8();
extern unsigned int lbl_8202F648;
extern unsigned int lbl_8202F710;
extern unsigned int lbl_8202F7D8;
extern unsigned int lbl_8202F958;
extern unsigned int lbl_8202F9B8;
extern unsigned int lbl_8202FB38;
extern unsigned int lbl_8202FCB8;
extern unsigned int lbl_8202FD18;
extern unsigned int lbl_82030448;


unsigned __int64 fn_8293EE00(int param_1)

{
  short sVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  short *psVar7;
  unsigned int *puVar8;
  unsigned short *puVar9;
  int iVar10;
  int iVar11;
  
  *(int *)(param_1 + 0x14) = param_1 + 0x408;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0xffffffff;
  *(short **)(param_1 + 0x10) = (short *)(param_1 + 0x20);
  iVar11 = 0;
  *(unsigned short *)(param_1 + 0x20) = 0;
LAB_8293ee4c:
  do {
    while( true ) {
      iVar10 = iVar11 * 2;
      sVar1 = *(short *)(&lbl_8202F7D8 + iVar10);
      if (sVar1 == 0) break;
LAB_8293ef50:
      iVar11 = sVar1 * 2;
      iVar10 = (int)*(short *)(&lbl_8202F710 + iVar11);
      *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(*(int *)(param_1 + 0x14) + iVar10 * -4 + 4);
      switch((int)sVar1) {
      case 1:
        uVar3 = 0;
        goto code_r0x8293f3c4;
      case 2:
        uVar4 = 1;
        uVar3 = 1;
        break;
      case 3:
        uVar4 = 1;
        uVar3 = 2;
        break;
      case 4:
        uVar4 = 2;
        uVar3 = 3;
        break;
      case 5:
        uVar4 = 1;
        uVar3 = 4;
        break;
      case 6:
        uVar4 = 1;
        uVar3 = 5;
        break;
      case 7:
        uVar4 = 1;
        uVar3 = 6;
        break;
      case 8:
        uVar3 = 7;
        goto code_r0x8293f3c4;
      case 9:
        uVar4 = 1;
        uVar3 = 8;
        break;
      case 10:
        uVar4 = 1;
        uVar3 = 9;
        break;
      case 0xb:
        uVar4 = 1;
        uVar3 = 10;
        break;
      case 0xc:
        uVar4 = 1;
        uVar3 = 0xb;
        break;
      case 0xd:
        uVar4 = 2;
        uVar3 = 0xc;
        break;
      case 0xe:
        uVar4 = 1;
        uVar3 = 0xd;
        break;
      case 0xf:
        uVar4 = 2;
        uVar3 = 0xe;
        break;
      case 0x10:
        uVar4 = 1;
        uVar3 = 0xf;
        break;
      case 0x11:
        uVar4 = 2;
        uVar3 = 0x10;
        break;
      case 0x12:
        uVar4 = 3;
        uVar3 = 0x11;
        break;
      case 0x13:
        uVar4 = 4;
        uVar3 = 0x12;
        break;
      case 0x14:
        uVar4 = 5;
        uVar3 = 0x13;
        break;
      case 0x15:
        uVar4 = 6;
        uVar3 = 0x14;
        break;
      case 0x16:
        uVar4 = 6;
        uVar3 = 0x15;
        break;
      case 0x17:
        uVar4 = 6;
        uVar3 = 0x16;
        break;
      case 0x18:
        uVar4 = 3;
        uVar3 = 0x17;
        break;
      case 0x19:
        uVar4 = 2;
        uVar3 = 0x18;
        break;
      case 0x1a:
        uVar4 = 3;
        uVar3 = 0x19;
        break;
      case 0x1b:
        uVar4 = 2;
        uVar3 = 0x1a;
        break;
      case 0x1c:
        uVar4 = 2;
        uVar3 = 0x1b;
        break;
      case 0x1d:
        uVar4 = 3;
        uVar3 = 0x1d;
        break;
      case 0x1e:
        uVar4 = 2;
        uVar3 = 0x1c;
        break;
      case 0x1f:
        uVar4 = 3;
        uVar3 = 0x1e;
        break;
      case 0x20:
        uVar4 = 3;
        uVar3 = 0x1f;
        break;
      case 0x21:
        uVar4 = 4;
        uVar3 = 0x20;
        break;
      case 0x22:
        uVar4 = 4;
        uVar3 = 0x21;
        break;
      case 0x23:
        uVar4 = 5;
        uVar3 = 0x22;
        break;
      case 0x24:
        uVar4 = 1;
        uVar3 = 0x23;
        break;
      case 0x25:
        uVar4 = 2;
        uVar3 = 0x24;
        break;
      case 0x26:
        uVar4 = 2;
        uVar3 = 0x25;
        break;
      case 0x27:
        uVar4 = 3;
        uVar3 = 0x26;
        break;
      case 0x28:
        uVar4 = 3;
        uVar3 = 0x27;
        break;
      case 0x29:
        uVar4 = 4;
        uVar3 = 0x28;
        break;
      case 0x2a:
        uVar4 = 1;
        uVar3 = 0x29;
        break;
      case 0x2b:
        uVar4 = 1;
        uVar3 = 0x2a;
        break;
      case 0x2c:
        uVar4 = 2;
        uVar3 = 0x2b;
        break;
      case 0x2d:
        uVar4 = 1;
        uVar3 = 0x2c;
        break;
      case 0x2e:
        uVar4 = 2;
        uVar3 = 0x2d;
        break;
      case 0x2f:
        uVar4 = 1;
        uVar3 = 0x2e;
        break;
      case 0x30:
        uVar4 = 1;
        uVar3 = 0x2f;
        break;
      case 0x31:
        uVar4 = 1;
        uVar3 = 0x30;
        break;
      case 0x32:
        uVar4 = 1;
        uVar3 = 0x31;
        break;
      case 0x33:
        uVar4 = 1;
        uVar3 = 0x32;
        break;
      case 0x34:
        uVar4 = 2;
        uVar3 = 0x33;
        break;
      case 0x35:
        uVar4 = 1;
        uVar3 = 0x34;
        break;
      case 0x36:
        uVar4 = 1;
        uVar3 = 0x35;
        break;
      case 0x37:
        uVar4 = 1;
        uVar3 = 0x36;
        break;
      case 0x38:
        uVar4 = 2;
        uVar3 = 0x37;
        break;
      case 0x39:
        uVar4 = 1;
        uVar3 = 0x38;
        break;
      case 0x3a:
        uVar4 = 2;
        uVar3 = 0x39;
        break;
      case 0x3b:
        uVar4 = 1;
        uVar3 = 0x3c;
        break;
      case 0x3c:
        uVar4 = 2;
        uVar3 = 0x3d;
        break;
      case 0x3d:
        uVar4 = 1;
        uVar3 = 0x3e;
        break;
      case 0x3e:
        uVar4 = 2;
        uVar3 = 0x3f;
        break;
      case 0x3f:
        uVar4 = 1;
        uVar3 = 0x40;
        break;
      case 0x40:
        uVar4 = 1;
        uVar3 = 0x41;
        break;
      case 0x41:
        uVar3 = 0x42;
        goto code_r0x8293f3c4;
      case 0x42:
        uVar3 = 0x43;
        goto code_r0x8293f3c4;
      case 0x43:
        uVar4 = 1;
        uVar3 = 0x44;
        break;
      case 0x44:
        uVar4 = 1;
        uVar3 = 0x45;
        break;
      case 0x45:
        uVar4 = 1;
        uVar3 = 0x46;
        break;
      case 0x46:
        uVar4 = 1;
        uVar3 = 0x47;
        break;
      case 0x47:
        uVar4 = 1;
        uVar3 = 0x48;
        break;
      case 0x48:
        uVar4 = 1;
        uVar3 = 0x49;
        break;
      case 0x49:
        uVar4 = 1;
        uVar3 = 0x4a;
        break;
      case 0x4a:
        uVar4 = 1;
        uVar3 = 0x4b;
        break;
      case 0x4b:
        uVar4 = 1;
        uVar3 = 0x4c;
        break;
      case 0x4c:
        uVar3 = 0x4d;
        goto code_r0x8293f3c4;
      case 0x4d:
        uVar3 = 0x4e;
        goto code_r0x8293f3c4;
      case 0x4e:
        uVar3 = 0x4f;
        goto code_r0x8293f3c4;
      case 0x4f:
        uVar3 = 0x50;
        goto code_r0x8293f3c4;
      case 0x50:
        uVar3 = 0x51;
        goto code_r0x8293f3c4;
      case 0x51:
        uVar3 = 0x52;
        goto code_r0x8293f3c4;
      case 0x52:
        uVar3 = 0x53;
        goto code_r0x8293f3c4;
      case 0x53:
        uVar3 = 0x54;
        goto code_r0x8293f3c4;
      case 0x54:
        uVar3 = 0x55;
        goto code_r0x8293f3c4;
      case 0x55:
        uVar3 = 0x57;
        goto code_r0x8293f3c4;
      case 0x56:
        uVar3 = 0x59;
        goto code_r0x8293f3c4;
      case 0x57:
        uVar3 = 0x5b;
        goto code_r0x8293f3c4;
      case 0x58:
        uVar3 = 0x56;
        goto code_r0x8293f3c4;
      case 0x59:
      case 0x5a:
        uVar3 = 0x58;
        goto code_r0x8293f3c4;
      case 0x5b:
        uVar3 = 0x5c;
        goto code_r0x8293f3c4;
      case 0x5c:
        uVar3 = 0x5d;
        goto code_r0x8293f3c4;
      case 0x5d:
        uVar3 = 0x5e;
        goto code_r0x8293f3c4;
      case 0x5e:
        uVar3 = 0x5f;
        goto code_r0x8293f3c4;
      case 0x5f:
        uVar3 = 0x60;
        goto code_r0x8293f3c4;
      case 0x60:
        uVar3 = 0x61;
        goto code_r0x8293f3c4;
      case 0x61:
        uVar3 = 0x62;
        goto code_r0x8293f3c4;
      case 0x62:
        uVar3 = 99;
code_r0x8293f3c4:
        uVar4 = 0;
        break;
      default:
        goto LAB_8293f3d0;
      }
      fn_8293E4E8(*(unsigned int *)(param_1 + 0xbd8),uVar3,uVar4);
LAB_8293f3d0:
      psVar7 = (short *)(*(int *)(param_1 + 0x10) + iVar10 * -2);
      *(short **)(param_1 + 0x10) = psVar7;
      sVar1 = *psVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10 * -4;
      if ((sVar1 == 0) && (*(short *)(&lbl_8202F648 + iVar11) == 0)) {
        iVar11 = 0x19;
        puVar9 = (unsigned short *)(*(int *)(param_1 + 0x10) + 2);
        *(unsigned short **)(param_1 + 0x10) = puVar9;
        *puVar9 = 0x19;
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x14) + 4);
        *(unsigned int **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(unsigned int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0xc) < 0) {
          iVar10 = fn_8293BCC0(*(unsigned int *)(param_1 + 0xbd8));
          *(int *)(param_1 + 0xc) = iVar10;
          if (iVar10 < 0) {
            *(unsigned int *)(param_1 + 0xc) = 0;
          }
        }
        if (*(int *)(param_1 + 0xc) == 0) {
          return 0;
        }
      }
      else {
        iVar11 = *(short *)(&lbl_8202F648 + iVar11) * 2;
        if ((*(short *)(&lbl_8202FCB8 + iVar11) == 0) ||
           (((uVar6 = (__int64)*(short *)(&lbl_8202FCB8 + iVar11) + (__int64)sVar1,
             (__int64)uVar6 < 0 || (0x395 < (int)uVar6)) ||
            (iVar10 = (int)((uVar6 & 0xffffffff) << 1), *(short *)(&lbl_82030448 + iVar10) != sVar1)
            ))) {
          sVar1 = *(short *)(&lbl_8202F958 + iVar11);
        }
        else {
          sVar1 = *(short *)(&lbl_8202FD18 + iVar10);
        }
        if (param_1 + 0x406U <= *(unsigned int *)(param_1 + 0x10)) {
LAB_8293f5bc:
          fn_82937A10(param_1,0xffffffff82029624);
          return 1;
        }
        psVar7 = (short *)(*(unsigned int *)(param_1 + 0x10) + 2);
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        uVar5 = *(unsigned int *)(param_1 + 0x18);
LAB_8293f4d4:
        iVar11 = (int)sVar1;
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x14) + 4);
        *(unsigned int **)(param_1 + 0x14) = puVar8;
        *puVar8 = uVar5;
      }
    }
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar2 = fn_8293BCC0(*(unsigned int *)(param_1 + 0xbd8));
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 < 0) {
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
    }
    if (*(short *)(&lbl_8202F9B8 + iVar10) != 0) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (__int64)*(short *)(&lbl_8202F9B8 + iVar10);
      if (((-1 < (__int64)uVar6) && ((int)uVar6 < 0x396)) &&
         (iVar2 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_82030448 + iVar2) == *(unsigned int *)(param_1 + 0xc))) {
        if (param_1 + 0x406U <= *(unsigned int *)(param_1 + 0x10)) goto LAB_8293f5bc;
        psVar7 = (short *)(*(unsigned int *)(param_1 + 0x10) + 2);
        sVar1 = *(short *)(&lbl_8202FD18 + iVar2);
        iVar11 = (int)sVar1;
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x14) + 4);
        *(unsigned int **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(unsigned int *)(param_1 + 0x1c);
        *(unsigned int *)(param_1 + 0xc) = 0xffffffff;
        if (0 < *(int *)(param_1 + 8)) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        goto LAB_8293ee4c;
      }
    }
    if (*(short *)(&lbl_8202FB38 + iVar10) != 0) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (__int64)*(short *)(&lbl_8202FB38 + iVar10);
      if (((-1 < (__int64)uVar6) && ((int)uVar6 < 0x396)) &&
         (iVar10 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_82030448 + iVar10) == *(unsigned int *)(param_1 + 0xc))) {
        sVar1 = *(short *)(&lbl_8202FD18 + iVar10);
        goto LAB_8293ef50;
      }
    }
    if (*(int *)(param_1 + 8) == 0) {
      fn_82937A10(param_1,0xffffffff82029464);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    if (*(int *)(param_1 + 8) < 3) {
      *(unsigned int *)(param_1 + 8) = 3;
      while( true ) {
        psVar7 = *(short **)(param_1 + 0x10);
        if (((*(short *)(&lbl_8202F9B8 + *psVar7 * 2) != 0) &&
            (uVar6 = (__int64)*(short *)(&lbl_8202F9B8 + *psVar7 * 2) + 0x100, -1 < (__int64)uVar6
            )) && (((int)uVar6 < 0x396 &&
                   (iVar11 = (int)((uVar6 & 0xffffffff) << 1),
                   *(short *)(&lbl_82030448 + iVar11) == 0x100)))) break;
        if (psVar7 <= (short *)(param_1 + 0x20)) {
          return 1;
        }
        *(short **)(param_1 + 0x10) = psVar7 + -1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
      }
      if ((short *)(param_1 + 0x406) <= psVar7) goto LAB_8293f5bc;
      sVar1 = *(short *)(&lbl_8202FD18 + iVar11);
      *(short **)(param_1 + 0x10) = psVar7 + 1;
      psVar7[1] = sVar1;
      uVar5 = *(unsigned int *)(param_1 + 0x1c);
      goto LAB_8293f4d4;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return 1;
    }
    *(unsigned int *)(param_1 + 0xc) = 0xffffffff;
  } while( true );
}
/* @@ end fn_8293EE00 */

/* @@ begin fn_8293F5D8 */
extern unsigned int *auStack_c20;
extern int fn_82636758();
extern int fn_828F5688();
extern void fn_829370D8(Sh_8293E2D0 *);
extern int fn_82A9A228();
extern int fn_82A9F7D8();
extern int memset();


unsigned __int64
fn_8293F5D8(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5,
             unsigned int *param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_c20 [3088];

  param_1[1] = (int)param_2;
  fn_828F5688(param_2,0);
  if (param_5 == 0) {
    param_5 = (int)param_2 + 0x18;
  }
  *param_1 = param_5;
  param_1[0x19] = param_3;
  param_1[0xc] = 0;
  param_1[0x52] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = -1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 1;
  fn_829370D8(param_1);
  param_1[0x4d] = 0;
  param_1[0x17] = 0;
  if ((param_4 & 1) == 0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else {
    param_1[0x10] = 1;
    param_1[0x11] = 1;
  }
  if ((param_4 & 2) == 0) {
    param_1[0x12] = 0;
  }
  else {
    param_1[0x12] = 1;
  }
  if (param_1[0x4e] == 0) {
    iVar2 = fn_82636758();
    param_1[0x4e] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff8007000e;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  if (param_1[0x11] != 0) {
    param_1[0x18] = 4;
  }
  if ((param_6 == (unsigned int *)0x0) || (iVar2 = 1, (*param_6 & 2) == 0)) {
    iVar2 = 0;
  }
  param_1[0x51] = iVar2;
  param_1[0x50] = 0;
  if ((iVar2 != 0) && (param_1[0x4f] == 0)) {
    uVar1 = param_6[5];
    param_1[0x4f] = uVar1;
    if (uVar1 == 0) {
      param_1[0x51] = 0;
    }
    else {
      fn_82A9A228();
      param_1[0x50] = 1;
      uVar3 = 0xffffffffffff0000;
      if (param_1[0x10] != 1) {
        uVar3 = 0xfffffffffffe0000;
      }
      fn_82A9F7D8(param_1[0x4f],0,uVar3 | 0x3fd);
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_c20,0,0xbdc);
}
/* @@ end fn_8293F5D8 */
