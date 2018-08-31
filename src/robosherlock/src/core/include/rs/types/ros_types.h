/*
 * This file was generated by generate_typesystem.py.
 * Filename:    ros_types
 * Name:        ros
 * Description: No description given
 * Version:     1.0
 * Vendor:      None
 */
#ifndef __ROS_TYPES_H__
#define __ROS_TYPES_H__

#include <rs/feature_structure_proxy.h>
#include <rs/types/type_definitions.h>

namespace rs
{

/*
 * No description given
 */
class Header : public FeatureStructureProxy
{
private:
  void initFields()
  {
    seq.init(this, "seq");
    frame_id.init(this, "frame_id");
    stamp.init(this, "stamp");
  }
public:
  // sequence number
  FeatureStructureEntry<int> seq;
  // ROS frame id
  FeatureStructureEntry<std::string> frame_id;
  // time stamp
  FeatureStructureEntry<INT64> stamp;

  Header(const Header &other) :
      FeatureStructureProxy(other)
  {
    initFields();
  }

  Header(uima::FeatureStructure fs) :
      FeatureStructureProxy(fs)
  {
    initFields();
  }
};

/*
 * Region of interest for CameraInfo
 */
class ROI : public FeatureStructureProxy
{
private:
  void initFields()
  {
    x_offset.init(this, "x_offset");
    y_offset.init(this, "y_offset");
    height.init(this, "height");
    width.init(this, "width");
    do_rectify.init(this, "do_rectify");
  }
public:
  // No description given
  FeatureStructureEntry<int> x_offset;
  // No description given
  FeatureStructureEntry<int> y_offset;
  // No description given
  FeatureStructureEntry<int> height;
  // No description given
  FeatureStructureEntry<int> width;
  // No description given
  FeatureStructureEntry<bool> do_rectify;

  ROI(const ROI &other) :
      FeatureStructureProxy(other)
  {
    initFields();
  }

  ROI(uima::FeatureStructure fs) :
      FeatureStructureProxy(fs)
  {
    initFields();
  }
};

/*
 * CameraInfo
 */
class CameraInfo : public FeatureStructureProxy
{
private:
  void initFields()
  {
    header.init(this, "header");
    distortion_model.init(this, "distortion_model");
    height.init(this, "height");
    width.init(this, "width");
    d.init(this, "d");
    r.init(this, "r");
    p.init(this, "p");
    k.init(this, "k");
    binning_x.init(this, "binning_x");
    binning_y.init(this, "binning_y");
    roi.init(this, "roi");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<Header> header;
  // No description given
  FeatureStructureEntry<std::string> distortion_model;
  // No description given
  FeatureStructureEntry<int> height;
  // No description given
  FeatureStructureEntry<int> width;
  // No description given
  ArrayFeatureStructureEntry<double> d;
  // No description given
  ArrayFeatureStructureEntry<double> r;
  // No description given
  ArrayFeatureStructureEntry<double> p;
  // No description given
  ArrayFeatureStructureEntry<double> k;
  // No description given
  FeatureStructureEntry<int> binning_x;
  // No description given
  FeatureStructureEntry<int> binning_y;
  // No description given
  ComplexFeatureStructureEntry<ROI> roi;

  CameraInfo(const CameraInfo &other) :
      FeatureStructureProxy(other)
  {
    initFields();
  }

  CameraInfo(uima::FeatureStructure fs) :
      FeatureStructureProxy(fs)
  {
    initFields();
  }
};

}

TYPE_TRAIT(rs::Header, RS_ROS_HEADER)
TYPE_TRAIT(rs::ROI, RS_ROS_ROI)
TYPE_TRAIT(rs::CameraInfo, RS_ROS_CAMERAINFO)

#endif /* __ROS_TYPES_H__ */