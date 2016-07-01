/**********************************************************************
 *  Copyright (c) 2008-2016, Alliance for Sustainable Energy.  
 *  All rights reserved.
 *  
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *  
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **********************************************************************/

#ifndef OPENSTUDIO_WINDOWMATERIALGLAZINGINSPECTORVIEW_HPP
#define OPENSTUDIO_WINDOWMATERIALGLAZINGINSPECTORVIEW_HPP

#include "ModelObjectInspectorView.hpp"

namespace openstudio {

namespace model {

  class StandardGlazing;

}

class OSComboBox2;

class OSLineEdit2;

class OSQuantityEdit2;

class OSSwitch2;

class StandardsInformationMaterialWidget;

class WindowMaterialGlazingInspectorView : public ModelObjectInspectorView
{
  Q_OBJECT

  public:

    WindowMaterialGlazingInspectorView(bool isIP, const openstudio::model::Model& model, QWidget * parent = nullptr);

    virtual ~WindowMaterialGlazingInspectorView() {}

  protected:

    virtual void onClearSelection() override;

    virtual void onSelectModelObject(const openstudio::model::ModelObject& modelObject) override;

    virtual void onUpdate() override;

  private:

    void createLayout();

    void attach(openstudio::model::StandardGlazing & Glazing);

    void detach();

    void refresh();

    bool m_isIP;

    OSLineEdit2 * m_nameEdit = nullptr;

    OSComboBox2 * m_opticalDataType = nullptr;

    OSSwitch2 * m_solarDiffusing = nullptr;

    // OSLineEdit2 * m_windowGlassSpectralDataSetName = nullptr;

    OSQuantityEdit2 * m_thickness = nullptr;

    OSQuantityEdit2 * m_solarTransmittanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_frontSideSolarReflectanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_backSideSolarReflectanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_visibleTransmittanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_frontSideVisibleReflectanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_backSideVisibleReflectanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_infraredTransmittanceAtNormalIncidence = nullptr;

    OSQuantityEdit2 * m_frontSideInfraredHemisphericalEmissivity = nullptr;

    OSQuantityEdit2 * m_backSideInfraredHemisphericalEmissivity = nullptr;

    OSQuantityEdit2 * m_conductivity = nullptr;

    OSQuantityEdit2 * m_dirtCorrectionFactorForSolarAndVisibleTransmittance = nullptr;

    StandardsInformationMaterialWidget * m_standardsInformationWidget = nullptr;

};

} // openstudio

#endif // OPENSTUDIO_WINDOWMATERIALGLAZINGINSPECTORVIEW_HPP

