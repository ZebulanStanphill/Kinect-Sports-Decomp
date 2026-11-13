#define true 1
extern int fn_82822E38(aiStack_30);
extern int fn_82823058();
extern int fn_82823080();
extern int fn_828230A8();


void fn_8282D760(unsigned __int64 param_1,unsigned __int64 param_2,int (*param_3)())

{
  unsigned int aiStack_30;
  
  do {
    fn_82823080(param_2,&aiStack_30);
    if (aiStack_30 == 0) {
      fn_828230A8(param_2,&aiStack_30);
      if (aiStack_30 == 0) {
        fn_82823058(param_2,&aiStack_30);
        if (aiStack_30 == 0) {
          return;
        }
      }
    }
    fn_82822E38(aiStack_30);
    (*param_3)(param_1,aiStack_30);
  } while( true );
}

