extern int NtDuplicateObject(void *,void **,unsigned int);extern void fn_82A2B760(int);
int fn_82A263F0(void *source_process,void *source_handle,void *target_process,void **target_handle,unsigned int access,unsigned int inherit,unsigned int options) {int status=NtDuplicateObject(source_handle,target_handle,options);if(status>=0)return 1;fn_82A2B760(status);return 0;}
