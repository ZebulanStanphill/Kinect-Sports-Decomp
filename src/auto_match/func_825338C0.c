typedef struct Target_825338C0 Target_825338C0;
typedef struct Job_825338C0 Job_825338C0;

typedef struct TargetVtbl_825338C0 {
    char pad0[0x48];
    long (*add)(Target_825338C0 *self, Job_825338C0 *job); /* 0x48 */
} TargetVtbl_825338C0;

struct Target_825338C0 {
    TargetVtbl_825338C0 *vt; /* 0x00 */
};

struct Job_825338C0 {
    void *vt;                /* 0x00 */
    Target_825338C0 *target; /* 0x04 */
    int arg0;                /* 0x08 */
    int arg1;                /* 0x0C */
};

typedef struct Checker_825338C0 Checker_825338C0;

typedef struct CheckerVtbl_825338C0 {
    char pad0[0x38];
    unsigned char (*accepts)(Checker_825338C0 *self, Target_825338C0 *target); /* 0x38 */
} CheckerVtbl_825338C0;

struct Checker_825338C0 {
    CheckerVtbl_825338C0 *vt; /* 0x00 */
};

typedef struct Root_825338C0 Root_825338C0;

typedef struct RootVtbl_825338C0 {
    char pad0[0x1C];
    Checker_825338C0 *(*getChecker)(Root_825338C0 *self); /* 0x1C */
} RootVtbl_825338C0;

struct Root_825338C0 {
    RootVtbl_825338C0 *vt; /* 0x00 */
};

extern void *lbl_8327F86C;
extern char lbl_821C3FBC[];

extern Root_825338C0 *fn_82864E90(void);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern void fn_82536690(void *vec, Job_825338C0 **item);

long fn_825338C0(int arg0, int arg1, Target_825338C0 *target)
{
    void *jobs = lbl_8327F86C;
    Root_825338C0 *root = fn_82864E90();
    Checker_825338C0 *checker = root->vt->getChecker(root);
    Job_825338C0 *job;
    Job_825338C0 *mem;
    Job_825338C0 *stored;

    if (!checker->vt->accepts(checker, target)) {
        return 0x80004005;
    }
    mem = (Job_825338C0 *)fn_8265C9E0(0x10);
    if (mem != 0) {
        mem->target = target;
        mem->arg0 = arg0;
        mem->arg1 = arg1;
        mem->vt = lbl_821C3FBC;
        job = mem;
    } else {
        job = 0;
    }
    stored = job;
    if (job == 0) {
        return 0x80004005;
    }
    if (target->vt->add(target, job) < 0) {
        fn_8265CA20(job);
        return 0x80004005;
    }
    fn_82536690(jobs, &stored);
    return 0;
}
