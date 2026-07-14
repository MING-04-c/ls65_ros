#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to eli_common_interface__srv__GetTaskStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTaskStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTaskStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskStatus_Request {
  type RmwMsg = super::srv::rmw::GetTaskStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to eli_common_interface__srv__GetTaskStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: super::msg::TaskStatus,

}



impl Default for GetTaskStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTaskStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskStatus_Response {
  type RmwMsg = super::srv::rmw::GetTaskStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        status: super::msg::TaskStatus::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        status: super::msg::TaskStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      status: super::msg::TaskStatus::from_rmw_message(msg.status),
    }
  }
}


// Corresponds to eli_common_interface__srv__GetRobotMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetRobotMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotMode_Request {
  type RmwMsg = super::srv::rmw::GetRobotMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to eli_common_interface__srv__GetRobotMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::RobotMode,

}



impl Default for GetRobotMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotMode_Response {
  type RmwMsg = super::srv::rmw::GetRobotMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      mode: super::msg::RobotMode::from_rmw_message(msg.mode),
    }
  }
}


// Corresponds to eli_common_interface__srv__GetSafetyMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSafetyMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSafetyMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSafetyMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSafetyMode_Request {
  type RmwMsg = super::srv::rmw::GetSafetyMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to eli_common_interface__srv__GetSafetyMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSafetyMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::SafetyMode,

}



impl Default for GetSafetyMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSafetyMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSafetyMode_Response {
  type RmwMsg = super::srv::rmw::GetSafetyMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        mode: super::msg::SafetyMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        mode: super::msg::SafetyMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      mode: super::msg::SafetyMode::from_rmw_message(msg.mode),
    }
  }
}


// Corresponds to eli_common_interface__srv__SetIO_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Request {
    /// request fields
    pub fun: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pin: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_type: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: f64,

}

impl SetIO_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_DIGITAL_OUT: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_CONFIGURE_OUT: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_TOOL_DIG_OUT: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_ANALOG_OUT: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_TOOL_VOLTAGE: i8 = 5;

    /// valid values for 'state' when setting digital IO or flags
    pub const STATE_OFF: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_ON: i8 = 1;

    /// valid 'state' values when setting tool voltage
    pub const STATE_TOOL_VOLTAGE_0V: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_TOOL_VOLTAGE_12V: i8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_TOOL_VOLTAGE_24V: i8 = 24;

    /// valid 'analog_type' values when setting analog io
    pub const ANALOG_CURRENT: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ANALOG_VOLTAGE: i8 = 1;

}


impl Default for SetIO_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIO_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetIO_Request {
  type RmwMsg = super::srv::rmw::SetIO_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fun: msg.fun,
        pin: msg.pin,
        analog_type: msg.analog_type,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fun: msg.fun,
      pin: msg.pin,
      analog_type: msg.analog_type,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fun: msg.fun,
      pin: msg.pin,
      analog_type: msg.analog_type,
      state: msg.state,
    }
  }
}


// Corresponds to eli_common_interface__srv__SetIO_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetIO_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIO_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetIO_Response {
  type RmwMsg = super::srv::rmw::SetIO_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to eli_common_interface__srv__SetSpeedSliderFraction_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_slider_fraction: f64,

}



impl Default for SetSpeedSliderFraction_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeedSliderFraction_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Request {
  type RmwMsg = super::srv::rmw::SetSpeedSliderFraction_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed_slider_fraction: msg.speed_slider_fraction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed_slider_fraction: msg.speed_slider_fraction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed_slider_fraction: msg.speed_slider_fraction,
    }
  }
}


// Corresponds to eli_common_interface__srv__SetSpeedSliderFraction_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeedSliderFraction_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeedSliderFraction_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Response {
  type RmwMsg = super::srv::rmw::SetSpeedSliderFraction_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to eli_common_interface__srv__SetPayload_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mass: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_of_gravity: geometry_msgs::msg::Vector3,

}



impl Default for SetPayload_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPayload_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Request {
  type RmwMsg = super::srv::rmw::SetPayload_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mass: msg.mass,
        center_of_gravity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.center_of_gravity)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mass: msg.mass,
        center_of_gravity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.center_of_gravity)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mass: msg.mass,
      center_of_gravity: geometry_msgs::msg::Vector3::from_rmw_message(msg.center_of_gravity),
    }
  }
}


// Corresponds to eli_common_interface__srv__SetPayload_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetPayload_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPayload_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Response {
  type RmwMsg = super::srv::rmw::SetPayload_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}






#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetTaskStatus() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__GetTaskStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTaskStatus;

impl rosidl_runtime_rs::Service for GetTaskStatus {
    type Request = GetTaskStatus_Request;
    type Response = GetTaskStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetTaskStatus() }
    }
}




#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetRobotMode() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__GetRobotMode
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRobotMode;

impl rosidl_runtime_rs::Service for GetRobotMode {
    type Request = GetRobotMode_Request;
    type Response = GetRobotMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetRobotMode() }
    }
}




#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetSafetyMode() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__GetSafetyMode
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSafetyMode;

impl rosidl_runtime_rs::Service for GetSafetyMode {
    type Request = GetSafetyMode_Request;
    type Response = GetSafetyMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__GetSafetyMode() }
    }
}




#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetIO() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__SetIO
#[allow(missing_docs, non_camel_case_types)]
pub struct SetIO;

impl rosidl_runtime_rs::Service for SetIO {
    type Request = SetIO_Request;
    type Response = SetIO_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetIO() }
    }
}




#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__SetSpeedSliderFraction
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSpeedSliderFraction;

impl rosidl_runtime_rs::Service for SetSpeedSliderFraction {
    type Request = SetSpeedSliderFraction_Request;
    type Response = SetSpeedSliderFraction_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction() }
    }
}




#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetPayload() -> *const std::ffi::c_void;
}

// Corresponds to eli_common_interface__srv__SetPayload
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPayload;

impl rosidl_runtime_rs::Service for SetPayload {
    type Request = SetPayload_Request;
    type Response = SetPayload_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_common_interface__srv__SetPayload() }
    }
}


