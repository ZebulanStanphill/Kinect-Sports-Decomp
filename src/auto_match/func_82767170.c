#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


unsigned int fn_82767170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 8 + *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  return CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)
                                     (*(int *)((iVar2 + 7U >> 10 & 0x3ffffc) + iVar1) +
                                     (iVar2 + 7U & 0xfff)),
                                    *(unsigned char *)
                                     (*(int *)((iVar2 + 6U >> 10 & 0x3ffffc) + iVar1) +
                                     (iVar2 + 6U & 0xfff))),
                           *(unsigned char *)
                            (*(int *)((iVar2 + 5U >> 10 & 0x3ffffc) + iVar1) + (iVar2 + 5U & 0xfff))
                          ),
                  *(unsigned char *)
                   (*(int *)((iVar2 + 4U >> 10 & 0x3ffffc) + iVar1) + (iVar2 + 4U & 0xfff)));
}

