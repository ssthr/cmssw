#include "DQM/SiStripCommissioningSummary/interface/ApvTimingSummary.h"

//------------------------------------------------------------------------------
//
ApvTimingSummary::ApvTimingSummary(sistrip::View view) :
  CommissioningSummary(view) 
{
  //@@ anything here?
}

//------------------------------------------------------------------------------
//
ApvTimingSummary::ApvTimingSummary( const CommissioningSummaryFactory::Histo& histo,
				    const std::string& directory ) :
  CommissioningSummary( histo, directory ) 
{
  //@@ anything here?
}

//------------------------------------------------------------------------------
//
ApvTimingSummary::~ApvTimingSummary() {;}
