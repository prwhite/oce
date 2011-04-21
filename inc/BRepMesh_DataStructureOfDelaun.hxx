// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_DataStructureOfDelaun_HeaderFile
#define _BRepMesh_DataStructureOfDelaun_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_DataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_DataStructureOfDelaun.hxx>
#endif

#ifndef _BRepMesh_IDMapOfNodeOfDataStructureOfDelaun_HeaderFile
#include <BRepMesh_IDMapOfNodeOfDataStructureOfDelaun.hxx>
#endif
#ifndef _MeshDS_ListOfInteger_HeaderFile
#include <MeshDS_ListOfInteger.hxx>
#endif
#ifndef _BRepMesh_IDMapOfLinkOfDataStructureOfDelaun_HeaderFile
#include <BRepMesh_IDMapOfLinkOfDataStructureOfDelaun.hxx>
#endif
#ifndef _BRepMesh_IMapOfElementOfDataStructureOfDelaun_HeaderFile
#include <BRepMesh_IMapOfElementOfDataStructureOfDelaun.hxx>
#endif
#ifndef _MeshDS_MapOfInteger_HeaderFile
#include <MeshDS_MapOfInteger.hxx>
#endif
#ifndef _MeshDS_BaseAllocator_HeaderFile
#include <MeshDS_BaseAllocator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun.hxx>
#endif
#ifndef _Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun.hxx>
#endif
#ifndef _Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MeshDS_PairOfIndex_HeaderFile
#include <MeshDS_PairOfIndex.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class BRepMesh_Vertex;
class BRepMesh_Edge;
class BRepMesh_Triangle;
class BRepMesh_NodeHasherOfDataStructureOfDelaun;
class BRepMesh_LinkHasherOfDataStructureOfDelaun;
class BRepMesh_ElemHasherOfDataStructureOfDelaun;
class BRepMesh_IDMapOfNodeOfDataStructureOfDelaun;
class BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun;
class BRepMesh_IDMapOfLinkOfDataStructureOfDelaun;
class BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun;
class BRepMesh_IMapOfElementOfDataStructureOfDelaun;
class BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun;
class BRepMesh_SelectorOfDataStructureOfDelaun;



class BRepMesh_DataStructureOfDelaun : public MMgt_TShared {

public:

  
  Standard_EXPORT   BRepMesh_DataStructureOfDelaun(const MeshDS_BaseAllocator& theAllocator,const Standard_Integer NodeNumber = 100);
  
  Standard_EXPORT     Standard_Integer AddNode(const BRepMesh_Vertex& theNode) ;
  
  Standard_EXPORT    const BRepMesh_Vertex& GetNode(const Standard_Integer Index) ;
   const BRepMesh_Vertex& operator ()(const Standard_Integer Index) 
{
  return GetNode(Index);
}
  
  Standard_EXPORT    const MeshDS_ListOfInteger& GetNodeList(const Standard_Integer Index) ;
  
  Standard_EXPORT     void ForceRemoveNode(const Standard_Integer Index) ;
  
  Standard_EXPORT     void ForceRemoveLink(const Standard_Integer Index) ;
  
  Standard_EXPORT     void ReplaceNodes(const BRepMesh_IDMapOfNodeOfDataStructureOfDelaun& NewNodes) ;
  
  Standard_EXPORT     void RemoveNode(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean MoveNode(const Standard_Integer Index,const BRepMesh_Vertex& newNode) ;
  
  Standard_EXPORT     Standard_Integer NbNodes() const;
  
  Standard_EXPORT     Standard_Integer AddLink(const BRepMesh_Edge& theLink) ;
  
  Standard_EXPORT    const BRepMesh_Edge& GetLink(const Standard_Integer Index) ;
  
  Standard_EXPORT     void RemoveLink(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean SubstituteLink(const Standard_Integer Index,const BRepMesh_Edge& newLink) ;
  
  Standard_EXPORT     Standard_Integer NbLinks() const;
  
  Standard_EXPORT     Standard_Integer AddElement(const BRepMesh_Triangle& theElement) ;
  
  Standard_EXPORT    const BRepMesh_Triangle& GetElement(const Standard_Integer Index) ;
  
  Standard_EXPORT     void RemoveElement(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean SubstituteElement(const Standard_Integer Index,const BRepMesh_Triangle& newElement) ;
  
  Standard_EXPORT     Standard_Integer NbElements() const;
  
  Standard_EXPORT     void ClearDomain() ;
  
  Standard_EXPORT     Standard_Integer IndexOf(const BRepMesh_Vertex& aNode) const;
  
  Standard_EXPORT     Standard_Integer IndexOf(const BRepMesh_Edge& aLink) const;
  
  Standard_EXPORT     Standard_Integer IndexOf(const BRepMesh_Triangle& anElement) const;
  
  Standard_EXPORT    const MeshDS_ListOfInteger& LinkNeighboursOf(const Standard_Integer theNode) const;
  
  Standard_EXPORT    const MeshDS_PairOfIndex& ElemConnectedTo(const Standard_Integer theLink) const;
  
  Standard_EXPORT    const MeshDS_MapOfInteger& ElemOfDomain() const;
  
  Standard_EXPORT    const MeshDS_MapOfInteger& LinkOfDomain() const;
  
  Standard_EXPORT     void ClearDeleted() ;
  
  Standard_EXPORT     void Statistics(Standard_OStream& flot) const;
  
  Standard_EXPORT    const MeshDS_BaseAllocator& Allocator() const;




  DEFINE_STANDARD_RTTI(BRepMesh_DataStructureOfDelaun)

protected:




private: 

  
  Standard_EXPORT     void ClearElement(const Standard_Integer Index,const BRepMesh_Triangle& theElem) ;

BRepMesh_IDMapOfNodeOfDataStructureOfDelaun myNodes;
MeshDS_ListOfInteger myDelNodes;
BRepMesh_IDMapOfLinkOfDataStructureOfDelaun myLinks;
MeshDS_ListOfInteger myDelLinks;
BRepMesh_IMapOfElementOfDataStructureOfDelaun myElements;
MeshDS_MapOfInteger myElemOfDomain;
MeshDS_MapOfInteger myLinkOfDomain;
MeshDS_BaseAllocator myAllocator;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif