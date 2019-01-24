#include <Rcpp.h>
using namespace Rcpp;

double vacc3a(double age, bool female, bool ily){
  double p = 0.25 + 0.3 * 1 / (1 - exp(0.04 * age)) + 0.1 * ily;
  p = p * (female ? 1.25 : 0.75);
  p = std::max(p, 0.0);
  p = std::min(p, 1.0);
  return p;
}

// [[Rcpp::export]]
NumericVector vacc3(NumericVector age, LogicalVector female, 
                    LogicalVector ily) {
  int n = age.size();
  NumericVector out(n);

  for(int i = 0; i < n; ++i) {
    out[i] = vacc3a(age[i], female[i], ily[i]);
  }

  return out;
}


#include <Rcpp.h>
// vacc3
NumericVector vacc3(NumericVector age, LogicalVector female, LogicalVector ily);
RcppExport SEXP sourceCpp_1_vacc3(SEXP ageSEXP, SEXP femaleSEXP, SEXP ilySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type female(femaleSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type ily(ilySEXP);
    rcpp_result_gen = Rcpp::wrap(vacc3(age, female, ily));
    return rcpp_result_gen;
END_RCPP
}
