// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_LengthDimension_HeaderFile
#define _AIS_LengthDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_LengthDimension_HeaderFile
#include <Handle_AIS_LengthDimension.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _AIS_TypeOfDist_HeaderFile
#include <AIS_TypeOfDist.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _AIS_KindOfDimension_HeaderFile
#include <AIS_KindOfDimension.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
#ifndef _Handle_AIS_Drawer_HeaderFile
#include <Handle_AIS_Drawer.hxx>
#endif
class TopoDS_Face;
class TCollection_ExtendedString;
class gp_Pnt;
class TopoDS_Edge;
class TopoDS_Shape;
class Geom_Plane;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class AIS_Drawer;
class Bnd_Box;
class gp_Dir;
class TopoDS_Vertex;


//! A framework to display lengths. <br>
//! These can be lengths along a face or edge, or <br>
//! between two faces or two edges. <br>
//! The value of the length is given in a text figuring in this display. <br>
class AIS_LengthDimension : public AIS_Relation {

public:

  //! Constructs a length display object defined by the first <br>
//! face aFShape, the second face aSShape, the dimension aVal, and the text aText. <br>
  Standard_EXPORT   AIS_LengthDimension(const TopoDS_Face& aFirstFace,const TopoDS_Face& aSecondFace,const Standard_Real aVal,const TCollection_ExtendedString& aText);
  //! Constructs a length display object defined by the first <br>
//! face aFShape, the second face aSShape, the <br>
//! dimension aVal, the position aPosition, the arrow <br>
//! aSymbolPrs with the size anArrowSize and the text aText. <br>
  Standard_EXPORT   AIS_LengthDimension(const TopoDS_Face& aFirstFace,const TopoDS_Face& aSecondFace,const Standard_Real aVal,const TCollection_ExtendedString& aText,const gp_Pnt& aPosition,const DsgPrs_ArrowSide aSymbolPrs,const Standard_Real anArrowSize = 0.0);
  //! Constructs a length display object defined by the first <br>
//! edge or vertex aFShape, the second edge or vertex <br>
//! aSShape, the dimension aVal,and the plane aPlane. <br>
  Standard_EXPORT   AIS_LengthDimension(const TopoDS_Face& Face,const TopoDS_Edge& Edge,const Standard_Real Val,const TCollection_ExtendedString& Text);
  //! -- Constructs a length display object defined by the first <br>
//! edge or vertex aFShape, the second edge or vertex <br>
//! aSShape, the dimension aVal,and the plane aPlane. <br>
  Standard_EXPORT   AIS_LengthDimension(const TopoDS_Shape& aFShape,const TopoDS_Shape& aSShape,const Handle(Geom_Plane)& aPlane,const Standard_Real aVal,const TCollection_ExtendedString& aText);
  //! Constructs a length display object defined by the first <br>
//! edge or vertex aFShape, the second edge or vertex <br>
//! aSShape, the dimension aVal, the position aPosition, <br>
//! the type of distance aTypeDist, the type of arrow <br>
//! aSymbolPrs with the size anArrowSize, and the plane aPlane. <br>
  Standard_EXPORT   AIS_LengthDimension(const TopoDS_Shape& aFShape,const TopoDS_Shape& aSShape,const Handle(Geom_Plane)& aPlane,const Standard_Real aVal,const TCollection_ExtendedString& aText,const gp_Pnt& aPosition,const DsgPrs_ArrowSide aSymbolPrs,const AIS_TypeOfDist aTypeDist,const Standard_Real anArrowSize = 0.0);
  
  Standard_EXPORT     void SetFirstShape(const TopoDS_Shape& aFShape) ;
  
  Standard_EXPORT     void SetSecondShape(const TopoDS_Shape& aSShape) ;
  //! Indicates that we are concerned with a length. <br>
  Standard_EXPORT   virtual  AIS_KindOfDimension KindOfDimension() const;
  //! Returns true if the length dimension is movable. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsMovable() const;
  
//! Returns the type of distance of the length primitive. <br>
        AIS_TypeOfDist TypeOfDist() const;
  
//! Returns true if the length dimension is movable. <br>
        void SetTypeOfDist(const AIS_TypeOfDist aTypeDist) ;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   static  void ComputeTwoEdgesLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const Standard_Real ArrowSize,const TopoDS_Edge& FirstEdge,const TopoDS_Edge& SecondEdge,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,Standard_Integer& ExtShape,Standard_Real& Val,gp_Dir& DirAttach,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,DsgPrs_ArrowSide& SymbolPrs) ;
  
  Standard_EXPORT   static  void ComputeOneEdgeOneVertexLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const Standard_Real ArrowSize,const TopoDS_Shape& FirstShape,const TopoDS_Shape& SecondShape,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,Standard_Integer& ExtShape,Standard_Real& Val,gp_Dir& DirAttach,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,DsgPrs_ArrowSide& SymbolPrs) ;
  
  Standard_EXPORT   static  void ComputeTwoVerticesLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const Standard_Real ArrowSize,const TopoDS_Vertex& FirstVertex,const TopoDS_Vertex& SecondVertex,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,const AIS_TypeOfDist TypeDist,Standard_Integer& ExtShape,Standard_Real& Val,gp_Dir& DirAttach,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,DsgPrs_ArrowSide& SymbolPrs) ;




  DEFINE_STANDARD_RTTI(AIS_LengthDimension)

protected:




private: 

  
  Standard_EXPORT   virtual  void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   virtual  void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeOneFaceLength(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeOneEdgeLength(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeTwoFacesLength(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeEdgeFaceLength(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeFaceSelection(const Handle(SelectMgr_Selection)& aSelection) ;
  
  Standard_EXPORT     void ComputeEdgeVertexSelection(const Handle(SelectMgr_Selection)& aSelection) ;

Standard_Integer myNbShape;
gp_Pnt myFAttach;
gp_Pnt mySAttach;
gp_Dir myDirAttach;
AIS_TypeOfDist myTypeDist;


};


#include <AIS_LengthDimension.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
