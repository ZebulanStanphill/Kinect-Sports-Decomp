typedef unsigned int uint;
typedef int (*code)();
typedef struct { uint vt; uint pad; uint m[1]; } Sub_822B5CE8;
extern void fn_822315A0(uint);
extern void fn_8251FA58(uint);
extern void fn_82529320(uint, int);
extern void fn_825339A0(uint);
extern void fn_8265CA20(uint);
extern void fn_82672660(uint, uint *);
extern void fn_822B5EC0(uint);
extern void fn_822B7EE8(uint);
extern void fn_82359C18(uint *);
extern char lbl_821AC9C4[];
extern char lbl_821C7FB8[];

void fn_822B5CE8(uint *param_1)
{
    uint *puVar1;
    uint iVar2;
    Sub_822B5CE8 *sub;

    *param_1 = (uint)lbl_821AC9C4;
    fn_825339A0(param_1[5]);
    fn_82529320(param_1[5], 0);
    puVar1 = (uint *)param_1[0x44];
    param_1[5] = 0;
    if (puVar1 != 0) {
        (*(code *)*puVar1)(puVar1, 1);
    }
    puVar1 = (uint *)param_1[0x45];
    if (puVar1 != 0) {
        (*(code *)*puVar1)(puVar1, 1);
    }
    puVar1 = (uint *)param_1[0x1e];
    if (puVar1 != 0) {
        fn_82672660(puVar1[9], puVar1);
        fn_82672660(*puVar1, puVar1);
        if (puVar1[10] != 0) {
            fn_822315A0(puVar1[10]);
        }
        if (puVar1[1] != 0) {
            fn_822315A0(puVar1[1]);
        }
        fn_8265CA20((uint)puVar1);
    }
    iVar2 = param_1[0x1f];
    if (iVar2 != 0) {
        if (*(uint *)(iVar2 + 0x28) != 0) {
            fn_8251FA58(*(uint *)(iVar2 + 0x28));
            *(uint *)(iVar2 + 0x28) = 0;
        }
        puVar1 = *(uint **)(iVar2 + 0x20);
        if (puVar1 != 0) {
            (*(code *)*puVar1)(puVar1, 1);
        }
        if (*(uint *)(iVar2 + 0xc) != 0) {
            fn_822315A0(*(uint *)(iVar2 + 0xc));
        }
        fn_8265CA20(iVar2);
    }
    iVar2 = param_1[0x46];
    if (iVar2 != 0) {
        fn_822B7EE8(iVar2);
        fn_8265CA20(iVar2);
    }
    if (param_1[0x47] != 0) {
        fn_8265CA20(param_1[0x47]);
    }
    puVar1 = (uint *)param_1[6];
    if (puVar1 != 0) {
        (*(code *)*puVar1)(puVar1, 1);
    }
    if (param_1[0x5a] != 0) {
        *(uint *)(param_1[0x5a] + 0xbc) = 0;
        param_1[0x5a] = 0;
    }
    if (param_1[0x5c] != 0) {
        fn_822B5EC0(param_1[0x5c]);
        param_1[0x5c] = 0;
    }
    sub = (Sub_822B5CE8 *)(param_1 + 0x5e);
    fn_82359C18(sub->m);
    sub->vt = (uint)lbl_821C7FB8;
    if (param_1[0x59] != 0) {
        fn_822315A0(param_1[0x59]);
    }
    if (param_1[0x57] != 0) {
        fn_822315A0(param_1[0x57]);
    }
    fn_82359C18(param_1 + 0x50);
}
