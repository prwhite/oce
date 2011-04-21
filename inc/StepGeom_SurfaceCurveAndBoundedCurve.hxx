// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SurfaceCurveAndBoundedCurve_HeaderFile
#define _StepGeom_SurfaceCurveAndBoundedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_SurfaceCurveAndBoundedCurve_HeaderFile
#include <Handle_StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#endif

#ifndef _Handle_StepGeom_BoundedCurve_HeaderFile
#include <Handle_StepGeom_BoundedCurve.hxx>
#endif
#ifndef _StepGeom_SurfaceCurve_HeaderFile
#include <StepGeom_SurfaceCurve.hxx>
#endif
class StepGeom_BoundedCurve;


//! complex type: bounded_curve + surface_curve <br>
//!          needed for curve_bounded_surfaces (S4132) <br>
class StepGeom_SurfaceCurveAndBoundedCurve : public StepGeom_SurfaceCurve {

public:

  //! creates empty object <br>
  Standard_EXPORT   StepGeom_SurfaceCurveAndBoundedCurve();
  //! returns field BoundedCurve <br>
  Standard_EXPORT     Handle_StepGeom_BoundedCurve& BoundedCurve() ;




  DEFINE_STANDARD_RTTI(StepGeom_SurfaceCurveAndBoundedCurve)

protected:




private: 


Handle_StepGeom_BoundedCurve myBoundedCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif