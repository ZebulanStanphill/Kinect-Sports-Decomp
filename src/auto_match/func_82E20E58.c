#include <string.h>

typedef struct Job_82E20E58 {
    struct Job_82E20E58 *next;
    const char *filename; /* 0x04 */
    const char *status;   /* 0x08 */
} Job_82E20E58;

typedef struct {
    unsigned char pad[2];
    unsigned char disabled;
    unsigned char reserved[5];
    void *queue;        /* 0x08 */
    Job_82E20E58 *jobs; /* 0x0c */
} Uploads_82E20E58;

typedef struct {
    unsigned char pad[8];
    void *settings;
} Config_82E20E58;

extern Config_82E20E58 *fn_82E1D550(void);
extern unsigned char fn_82E1DF00(void *, const char *, int);
extern void fn_82E209B0(Uploads_82E20E58 *);
extern char *fn_82E20100(const char *, int);
extern void fn_82E205A0(Job_82E20E58 *, const char *);
extern void fn_82E205F8(Job_82E20E58 *, int);
extern void fn_82E208B0(Uploads_82E20E58 *, Job_82E20E58 *, const char *);
extern void fn_82E22508(void *, char *);
extern void fn_82E20810(Uploads_82E20E58 *, Job_82E20E58 *);
extern void fn_82E20A98(Uploads_82E20E58 *);
extern void fn_8265CAA0(void *);
extern const char lbl_8214BA14[8];
extern const char lbl_8214BC2C[12];

void fn_82E20E58(Uploads_82E20E58 *self)
{
    Job_82E20E58 *job;
    Job_82E20E58 *next;
    char *filename;
    Config_82E20E58 *config;
    void *settings;

    if (self->disabled != 0)
        return;
    config = fn_82E1D550();
    settings = config->settings;
    if (fn_82E1DF00(settings, "DeleteOrphanFiles", 0))
        fn_82E209B0(self);

    job = self->jobs;
    if (self->queue != 0 && job != 0) {
        do {
            if (job == 0) {
                next = 0;
            } else {
                next = job->next;
            }
            if (strcmp(job->status, lbl_8214BA14) == 0) {
                const char *storedFilename;
                storedFilename = job->filename;
                filename = fn_82E20100(storedFilename, 1);
                if (filename == 0) {
                    fn_82E205A0(job, "Failed");
                    fn_82E205F8(job, 0);
                    fn_82E208B0(self, job, "Error: Could not recover file name");
                } else {
                    fn_82E22508(self->queue, filename);
                    fn_82E205A0(job, lbl_8214BC2C);
                    fn_82E205F8(job, 0);
                    fn_82E208B0(self, job, "Beginning Upload");
                    fn_8265CAA0(filename);
                }
            } else if (strcmp(job->status, lbl_8214BC2C) == 0) {
                fn_82E205F8(job, 0);
                fn_82E208B0(self, job, "Removing Job");
                fn_82E20810(self, job);
            }
            job = next;
        } while (job != 0);
    }
    fn_82E20A98(self);
}
