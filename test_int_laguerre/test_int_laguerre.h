void laguerre_compute ( int order, double xtab[], double weight[], 
  double alpha );
void laguerre_recur ( double *p2, double *dp2, double *p1, double x, 
  int order, double alpha, double b[], double c[] );
void laguerre_root ( double *x, int order, double alpha, double *dp2, 
  double *p1, double b[], double c[] );
void legendre_compute ( int order, double xtab[], double weight[] );
double p00_alpha ( int problem );
double p00_exact ( int problem );
double p00_exp_transform ( int problem, int order );
double *p00_fun ( int problem, int n, double x[] );
double p00_gauss_laguerre ( int problem, int order );
int p00_problem_num ( );
double p00_rat_transform ( int problem, int order );
char *p00_title ( int problem );
double p01_alpha ( );
double p01_exact ( );
double *p01_fun ( int n, double x[] );
char *p01_title ( );
double p02_alpha ( );
double p02_exact ( );
double *p02_fun ( int n, double x[] );
char *p02_title ( );
double p03_alpha ( );
double p03_exact ( );
double *p03_fun ( int n, double x[] );
char *p03_title ( );
double p04_alpha ( );
double p04_exact ( );
double *p04_fun ( int n, double x[] );
char *p04_title ( );
double p05_alpha ( );
double p05_exact ( );
double *p05_fun ( int n, double x[] );
char *p05_title ( );
double p06_alpha ( );
double p06_exact ( );
double *p06_fun ( int n, double x[] );
char *p06_title ( );
double p07_alpha ( );
double p07_exact ( );
double *p07_fun ( int n, double x[] );
char *p07_title ( );
double p08_alpha ( );
double p08_exact ( );
double *p08_fun ( int n, double x[] );
char *p08_title ( );
double p09_alpha ( );
double p09_exact ( );
double *p09_fun ( int n, double x[] );
char *p09_title ( );
double p10_alpha ( );
double p10_exact ( );
double *p10_fun ( int n, double x[] );
char *p10_title ( );
double p11_alpha ( );
double p11_exact ( );
double *p11_fun ( int n, double x[] );
char *p11_title ( );
double p12_alpha ( );
double p12_exact ( );
double *p12_fun ( int n, double x[] );
char *p12_title ( );
double p13_alpha ( );
double p13_exact ( );
double *p13_fun ( int n, double x[] );
char *p13_title ( );
double p14_alpha ( );
double p14_exact ( );
double *p14_fun ( int n, double x[] );
char *p14_title ( );
double p15_alpha ( );
double p15_exact ( );
double *p15_fun ( int n, double x[] );
char *p15_title ( );
double p16_alpha ( );
double p16_exact ( );
double *p16_fun ( int n, double x[] );
char *p16_title ( );
double p17_alpha ( );
double p17_exact ( );
double *p17_fun ( int n, double x[] );
char *p17_title ( );
double p18_alpha ( );
double p18_exact ( );
double *p18_fun ( int n, double x[] );
char *p18_title ( );
double p19_alpha ( );
double p19_exact ( );
double *p19_fun ( int n, double x[] );
char *p19_title ( );
double p20_alpha ( );
double p20_exact ( );
double *p20_fun ( int n, double x[] );
char *p20_title ( );
double r8_abs ( double x );
double r8_epsilon ( );
double r8_gamma ( double x );
double r8_huge ( );
double r8vec_dot_product ( int n, double a1[], double a2[] );
void timestamp ( );