typedef struct Vec_83066E20 { float x,y,z; } Vec_83066E20;
extern void fn_82810328(const Vec_83066E20 *,const Vec_83066E20 *,Vec_83066E20 *);
extern float fn_82810280(const Vec_83066E20 *,const Vec_83066E20 *);
extern void fn_82810558(const Vec_83066E20 *, const Vec_83066E20 *, float,Vec_83066E20 *);
void fn_83066E20(Vec_83066E20 *a, Vec_83066E20 *b,Vec_83066E20 *out) {
 Vec_83066E20 v;
 fn_82810328(b,a+1,&v);
 { float scale = -fn_82810280(a,&v); fn_82810558(a,b,scale,out); }
}
