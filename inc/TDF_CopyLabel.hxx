// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_CopyLabel_HeaderFile
#define _TDF_CopyLabel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _TDF_IDFilter_HeaderFile
#include <TDF_IDFilter.hxx>
#endif
#ifndef _TDF_AttributeMap_HeaderFile
#include <TDF_AttributeMap.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif
class TDF_RelocationTable;
class TDF_Label;
class TDF_IDFilter;
class TDF_AttributeMap;
class TDF_DataSet;



class TDF_CopyLabel  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty  constructor <br>
  Standard_EXPORT   TDF_CopyLabel();
  //! CopyTool <br>
  Standard_EXPORT   TDF_CopyLabel(const TDF_Label& aSource,const TDF_Label& aTarget);
  //! Loads  src  and  tgt  labels <br>
  Standard_EXPORT     void Load(const TDF_Label& aSource,const TDF_Label& aTarget) ;
  //!  Sets  filter <br>
  Standard_EXPORT     void UseFilter(const TDF_IDFilter& aFilter) ;
  //! Check  external  references and  if  exist  fills  the  aExternals  Map <br>
  Standard_EXPORT   static  Standard_Boolean ExternalReferences(const TDF_Label& Lab,TDF_AttributeMap& aExternals,const TDF_IDFilter& aFilter) ;
  //! Check  external  references and  if  exist  fills  the  aExternals  Map <br>
  Standard_EXPORT   static  void ExternalReferences(const TDF_Label& aRefLab,const TDF_Label& Lab,TDF_AttributeMap& aExternals,const TDF_IDFilter& aFilter,Handle(TDF_DataSet)& aDataSet) ;
  //!  performs  algorithm  of  selfcontained  copy <br>
  Standard_EXPORT     void Perform() ;
  
        Standard_Boolean IsDone() const;
  //! returns  relocation  table <br>
  Standard_EXPORT    const Handle_TDF_RelocationTable& RelocationTable() const;





protected:





private:



Handle_TDF_RelocationTable myRT;
TDF_Label mySL;
TDF_Label myTL;
TDF_IDFilter myFilter;
TDF_AttributeMap myMapOfExt;
Standard_Boolean myIsDone;


};


#include <TDF_CopyLabel.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
