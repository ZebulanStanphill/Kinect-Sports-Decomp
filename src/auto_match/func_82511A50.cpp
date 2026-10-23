#include "stdext/xmemory.h"
struct N1 { N1 *l,*p,*r; char data[12]; char color,isnil; };
struct N2 { N2 *l,*p,*r; char data[8]; char color,isnil; };
struct N3 { N3 *n,*p; char data[8]; };
struct Obj { void *vt; int a; N1 *h1; unsigned n1; int b,c; N2 *h2; unsigned n2; int d; N3 *h3; unsigned n3; };
extern "C" { extern Obj lbl_832977D0; extern char lbl_821C242C[]; }
extern "C" Obj *fn_82511A50() {
 Obj *p = &lbl_832977D0;
 p->n1=0; p->vt=lbl_821C242C;
 p->h1=std::_Allocate(1,(N1*)0);
 p->h1->l=p->h1; p->h1->p=p->h1; p->h1->r=p->h1; p->h1->color=1; p->h1->isnil=1;
 p->n2=0;
 p->h2=std::_Allocate(1,(N2*)0);
 p->h2->l=p->h2; p->h2->p=p->h2; p->h2->r=p->h2; p->h2->color=1; p->h2->isnil=1;
 p->n3=0;
 p->h3=std::_Allocate(1,(N3*)0);
 p->h3->n=p->h3; p->h3->p=p->h3;
 return p;
}
