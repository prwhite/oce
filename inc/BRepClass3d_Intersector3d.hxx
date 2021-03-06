// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass3d_Intersector3d_HeaderFile
#define _BRepClass3d_Intersector3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntCurveSurface_TransitionOnCurve_HeaderFile
#include <IntCurveSurface_TransitionOnCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
class gp_Lin;
class TopoDS_Face;
class gp_Pnt;



class BRepClass3d_Intersector3d  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor. <br>
  Standard_EXPORT   BRepClass3d_Intersector3d();
  //! Perform the intersection between the <br>
//!          segment L(0) ... L(Prm) and the Shape <Sh>. <br>
//! <br>
//!          Only the point with the smallest parameter on the <br>
//!          line is returned. <br>
//! <br>
//!          The Tolerance <Tol> is used to determine if the <br>
//!          first point of the segment is near the face. In <br>
//!          that case, the parameter of the intersection point <br>
//!          on the line can be a negative value (greater than -Tol). <br>
  Standard_EXPORT     void Perform(const gp_Lin& L,const Standard_Real Prm,const Standard_Real Tol,const TopoDS_Face& F) ;
  //! True is returned when the intersection have been computed. <br>
        Standard_Boolean IsDone() const;
  //! True is returned if a point has been found. <br>
        Standard_Boolean HasAPoint() const;
  //! Returns the U parameter of the intersection point <br>
//!          on the surface. <br>
        Standard_Real UParameter() const;
  //! Returns the V parameter of the intersection point <br>
//!          on the surface. <br>
        Standard_Real VParameter() const;
  //! Returns the parameter of the intersection point <br>
//!          on the line. <br>
        Standard_Real WParameter() const;
  //! Returns the geometric point of the intersection <br>
//!          between the line and the surface. <br>
       const gp_Pnt& Pnt() const;
  //! Returns the transition of the line on the surface. <br>
        IntCurveSurface_TransitionOnCurve Transition() const;
  //! Returns the state of the point on the face. <br>
//!          The values can be either TopAbs_IN <br>
//!             ( the point is in the face) <br>
//!           or TopAbs_ON <br>
//!             ( the point is on a boudary of the face). <br>
        TopAbs_State State() const;
  //! Returns the significant face used to determine <br>
//!          the intersection. <br>
//! <br>
       const TopoDS_Face& Face() const;





protected:





private:



gp_Pnt pnt;
Standard_Real U;
Standard_Real V;
Standard_Real W;
IntCurveSurface_TransitionOnCurve transition;
Standard_Boolean done;
Standard_Boolean hasapoint;
TopAbs_State state;
TopoDS_Face face;


};


#include <BRepClass3d_Intersector3d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
