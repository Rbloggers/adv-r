#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
std::map<double, int> tableC(NumericVector x) {
  std::map<double, int> counts;

  int n = x.size();
  for (int i = 0; i < n; i++) {
    counts[x[i]]++;
  }

  return counts;
}


#include <Rcpp.h>
// tableC
std::map<double, int> tableC(NumericVector x);
RcppExport SEXP sourceCpp_1_tableC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tableC(x));
    return rcpp_result_gen;
END_RCPP
}
