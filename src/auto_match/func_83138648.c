/* lbl_83187414 is hkStructureLayout::HostLayoutRules (see func_82E0F818.cpp) */
typedef struct {
  unsigned char bytesInPointer;
  unsigned char littleEndian;
  unsigned char reusePaddingOptimization;
  unsigned char emptyBaseClassOptimization;
} LayoutRules_83138648;
extern int lbl_8214B5F8;
extern LayoutRules_83138648 lbl_83187414;

void fn_83138648(void)
{
  lbl_83187414.littleEndian = lbl_8214B5F8 == 1;
}
