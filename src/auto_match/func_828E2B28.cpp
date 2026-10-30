struct Out { virtual void f0(); virtual void f1(int, int); };
extern "C" Out *lbl_83214448[];
extern "C" void fn_828E2B28(int a, int b) { if (lbl_83214448[4]) lbl_83214448[4]->f1(a,b); }
