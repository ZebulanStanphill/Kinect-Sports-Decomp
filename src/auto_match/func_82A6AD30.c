typedef void (*Callback_82A6AD30)(void);
extern void fn_82A6A460(void), fn_82A6A3B8(void), fn_82C2D0C8(void), fn_82A6A498(void), fn_82C2D0A0(void), fn_82A6A3E0(void), fn_82A6A408(void), fn_82A6A338(void), fn_82A6A470(void), fn_82A6A3C8(void);
void fn_82A6AD30(Callback_82A6AD30 *a, Callback_82A6AD30 *b, int kind) {
 switch(kind) {
 case 61: *b=fn_82A6A460; *a=fn_82A6A3B8; break;
 case 0: *b=fn_82C2D0C8; *a=fn_82A6A498; break;
 case 78: *b=fn_82C2D0A0; *a=fn_82A6A3E0; break;
 default: *b=fn_82A6A408; *a=fn_82A6A338; break;
 case 94: *b=fn_82A6A470; *a=fn_82A6A3C8; break;
 }
}
