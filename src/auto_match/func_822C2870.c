extern void fn_822B6198(int,float);
extern void fn_822C44D0(int,float);
extern void fn_822FF9D0(unsigned,float);





void fn_822C2870(int param_2,float delta) {
 int changed;
 fn_822B6198(param_2,delta);
 changed = *(int *)(param_2+0x24) != 0;
 if (changed != *(int *)(param_2+0x1f0)) *(int *)(param_2+0x1f0)=changed;
 fn_822C44D0(param_2,delta);
 if (*(unsigned *)(param_2+0x1e8)) fn_822FF9D0(*(unsigned *)(param_2+0x1e8),delta);
}
