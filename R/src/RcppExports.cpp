// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "opentims_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// tdf_open
Rcpp::XPtr<TimsDataHandle> tdf_open(const Rcpp::String& path, const Rcpp::String& db_path);
RcppExport SEXP _opentims_tdf_open(SEXP pathSEXP, SEXP db_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::String& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String& >::type db_path(db_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_open(path, db_path));
    return rcpp_result_gen;
END_RCPP
}
// tdf_open_dir
Rcpp::XPtr<TimsDataHandle> tdf_open_dir(const Rcpp::String& path);
RcppExport SEXP _opentims_tdf_open_dir(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::String& >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_open_dir(path));
    return rcpp_result_gen;
END_RCPP
}
// tdf_min_frame_id
uint32_t tdf_min_frame_id(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentims_tdf_min_frame_id(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_min_frame_id(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_max_frame_id
uint32_t tdf_max_frame_id(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentims_tdf_max_frame_id(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_max_frame_id(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_no_peaks_total
size_t tdf_no_peaks_total(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentims_tdf_no_peaks_total(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_no_peaks_total(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_msms_type
Rcpp::IntegerVector tdf_get_msms_type(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentims_tdf_get_msms_type(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_msms_type(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_range
Rcpp::DataFrame tdf_get_range(Rcpp::XPtr<TimsDataHandle> tdf, size_t start, size_t end, int32_t step);
RcppExport SEXP _opentims_tdf_get_range(SEXP tdfSEXP, SEXP startSEXP, SEXP endSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< size_t >::type end(endSEXP);
    Rcpp::traits::input_parameter< int32_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_range(tdf, start, end, step));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_indexes
Rcpp::DataFrame tdf_get_indexes(Rcpp::XPtr<TimsDataHandle> tdf, Rcpp::IntegerVector indexes);
RcppExport SEXP _opentims_tdf_get_indexes(SEXP tdfSEXP, SEXP indexesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indexes(indexesSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_indexes(tdf, indexes));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_range_noend
Rcpp::DataFrame tdf_get_range_noend(Rcpp::XPtr<TimsDataHandle> tdf, size_t start, int32_t step);
RcppExport SEXP _opentims_tdf_get_range_noend(SEXP tdfSEXP, SEXP startSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< int32_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_range_noend(tdf, start, step));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_opentims_tdf_open", (DL_FUNC) &_opentims_tdf_open, 2},
    {"_opentims_tdf_open_dir", (DL_FUNC) &_opentims_tdf_open_dir, 1},
    {"_opentims_tdf_min_frame_id", (DL_FUNC) &_opentims_tdf_min_frame_id, 1},
    {"_opentims_tdf_max_frame_id", (DL_FUNC) &_opentims_tdf_max_frame_id, 1},
    {"_opentims_tdf_no_peaks_total", (DL_FUNC) &_opentims_tdf_no_peaks_total, 1},
    {"_opentims_tdf_get_msms_type", (DL_FUNC) &_opentims_tdf_get_msms_type, 1},
    {"_opentims_tdf_get_range", (DL_FUNC) &_opentims_tdf_get_range, 4},
    {"_opentims_tdf_get_indexes", (DL_FUNC) &_opentims_tdf_get_indexes, 2},
    {"_opentims_tdf_get_range_noend", (DL_FUNC) &_opentims_tdf_get_range_noend, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_opentims(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
