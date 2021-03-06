// Created on: 2007-08-20
// Created by: Alexander GRIGORIEV
// Copyright (c) 2007-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.



#ifndef NIS_SelectFilter_HeaderFile
#define NIS_SelectFilter_HeaderFile

#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

class NIS_InteractiveObject;
class Handle_Standard_Type;

/**
 * Interface for selection filters. It can be used in NIS_InteractiveContext
 * by methods SetFilter and GetFilter.<br>
 * Unlike in AIS, only one filter can be installed in InteractiveContext. If
 * you need more than one filter instance to work together, create a composite
 * NIS_SelectFilter specialization that would hold a list of simpler Filter
 * instances.
 */

class NIS_SelectFilter : public Standard_Transient
{
 public:
  // ---------- PUBLIC METHODS ----------


  /**
   * Empty constructor.
   */
  inline NIS_SelectFilter () {}

  /**
   * Indicate that the given NIS_InteractiveObject passes the Filter.
   * @return
   *   True - theObject is kept in the Selection, False - excluded from it.
   */
  virtual Standard_Boolean
        IsOk    (const NIS_InteractiveObject * theObject)       const = 0;

  /**
   * Check if the type of InteractiveObject is allowed for selection.
   * Default implementation returns always True. 
   * @return
   *   True if objects of the given Type should be checked, False if such
   *   objects are excluded from Selection before any checking.
   */ 
  Standard_EXPORT virtual Standard_Boolean
        ActsOn  (const Handle_Standard_Type& theType)           const;


 protected:
  // ---------- PROTECTED METHODS ----------




 public:
// Declaration of CASCADE RTTI
DEFINE_STANDARD_RTTI (NIS_SelectFilter)
};

// Definition of HANDLE object using Standard_DefineHandle.hxx
DEFINE_STANDARD_HANDLE (NIS_SelectFilter, Standard_Transient)

#endif
