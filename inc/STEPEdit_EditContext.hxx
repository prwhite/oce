// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPEdit_EditContext_HeaderFile
#define _STEPEdit_EditContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_STEPEdit_EditContext_HeaderFile
#include <Handle_STEPEdit_EditContext.hxx>
#endif

#ifndef _IFSelect_Editor_HeaderFile
#include <IFSelect_Editor.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IFSelect_EditForm_HeaderFile
#include <Handle_IFSelect_EditForm.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class TCollection_AsciiString;
class IFSelect_EditForm;
class TCollection_HAsciiString;
class Standard_Transient;
class Interface_InterfaceModel;


//! EditContext is an Editor fit for <br>
//!           Product Definition Context (one per Model) , i.e. : <br>
//!           - ProductDefinition <br>
//!           - ApplicationProtocolDefinition <br>
//!           - ProductRelatedProductCategory <br>
class STEPEdit_EditContext : public IFSelect_Editor {

public:

  
  Standard_EXPORT   STEPEdit_EditContext();
  
  Standard_EXPORT     TCollection_AsciiString Label() const;
  
  Standard_EXPORT     Standard_Boolean Recognize(const Handle(IFSelect_EditForm)& form) const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString StringValue(const Handle(IFSelect_EditForm)& form,const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Boolean Apply(const Handle(IFSelect_EditForm)& form,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  
  Standard_EXPORT     Standard_Boolean Load(const Handle(IFSelect_EditForm)& form,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;




  DEFINE_STANDARD_RTTI(STEPEdit_EditContext)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
