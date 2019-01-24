#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
RObject callWithOne(Function f) {
  return f(1);
}


#include <Rcpp.h>
// callWithOne
RObject callWithOne(Function f);
RcppExport SEXP sourceCpp_1_callWithOne(SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(callWithOne(f));
    return rcpp_result_gen;
END_RCPP
}
