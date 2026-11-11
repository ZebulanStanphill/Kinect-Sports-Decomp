extern int fn_82CE8E78(void *jobQueue, const void *job, void *nextJobOut, int waitStatus);

int fn_82CE90F8(void *jobQueue, void *nextJobOut, int waitStatus)
{
    return fn_82CE8E78(jobQueue, 0, nextJobOut, waitStatus);
}
