void hermite_compute ( int order, double xtab[], double weight[] );
void hermite_recur ( double *p2, double *dp2, double *p1, double x, 
  int order );
void hermite_root ( double *x, int order, double *dp2, double *p1 );
void hermite_compute ( int order, double xtab[], double weight[] );
int i4_factorial2 ( int n );
double p00_exact ( int problem );
double p00_exp_transform ( int problem, int order );
void p00_fun ( int problem, int option, int n, double x[], double f[] );
double p00_gauss_hermite ( int problem, int order );
double p00_monte_carlo ( int problem, int order );
int p00_problem_num ( void );
double p00_turing ( int problem, double h, double tol, int *n );
char *p00_title ( int problem );
double p01_exact ( void );
void p01_fun ( int option, int n, double x[], double f[] );
char *p01_title ( void );
double p02_exact ( void );
void p02_fun ( int option, int n, double x[], double f[] );
char *p02_title ( void );
double p03_exact ( void );
void p03_fun ( int option, int n, double x[], double f[] );
char *p03_title ( void );
double p04_exact ( void );
void p04_fun ( int option, int n, double x[], double f[] );
char *p04_title ( void );
double p05_exact ( void );
void p05_fun ( int option, int n, double x[], double f[] );
char *p05_title ( void );
double p06_exact ( void );
void p06_fun ( int option, int n, double x[], double f[] );
void p06_param ( char action, char name, int *value );
char *p06_title ( void );
double p07_exact ( void );
void p07_fun ( int option, int n, double x[], double f[] );
char *p07_title ( void );
double p08_exact ( void );
void p08_fun ( int option, int n, double x[], double f[] );
char *p08_title ( void );
double r8_abs ( double x );
double r8_epsilon ( void );
double r8_gamma ( double x );
double r8_huge ( void );
double r8vec_dot_product ( int n, double a1[], double a2[] );
double *r8vec_normal_01_new ( int n, int *seed );
void r8vec_reverse ( int n, double a[] );
double r8vec_sum ( int n, double a[] );
double *r8vec_uniform_01_new ( int n, int *seed );
void timestamp ( void );
