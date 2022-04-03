/* user and group to drop privileges to */
static const char *user  = "leo";
static const char *group = "leo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#333333",     /* after initialization */
	[INPUT] =  "#73d0a3",   /* during input */
	[FAILED] = "#d24d44",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
