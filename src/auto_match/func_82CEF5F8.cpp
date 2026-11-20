#include "havok/hkString.h"

typedef struct Node_82CEF5F8 { void *value; int pad; struct Node_82CEF5F8 *next; } Node_82CEF5F8;
extern "C" Node_82CEF5F8 *fn_82CEF5F8(Node_82CEF5F8 *p,void *ctx) {
 while(p->value == 0 || hkString::strCmp(reinterpret_cast<const char *>(ctx), reinterpret_cast<const char *>(p->value)) != 0) {
 Node_82CEF5F8 *next=p->next; if(next==0) return 0; p=next;
 } return p;
}
