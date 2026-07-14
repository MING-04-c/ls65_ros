#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to eli_dashboard_interface__srv__Load_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Load_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub filename: std::string::String,

}



impl Default for Load_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Load_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Load_Request {
  type RmwMsg = super::srv::rmw::Load_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filename: msg.filename.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filename: msg.filename.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filename: msg.filename.to_string(),
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__Load_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Load_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub answer: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Load_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Load_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Load_Response {
  type RmwMsg = super::srv::rmw::Load_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        answer: msg.answer.as_str().into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        answer: msg.answer.as_str().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      answer: msg.answer.to_string(),
      success: msg.success,
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__Popup_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Popup_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arg: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Popup_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Popup_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Popup_Request {
  type RmwMsg = super::srv::rmw::Popup_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arg: msg.arg.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arg: msg.arg.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      arg: msg.arg.to_string(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__Popup_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Popup_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Popup_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Popup_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Popup_Response {
  type RmwMsg = super::srv::rmw::Popup_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__Log_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Log_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Log_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Log_Request {
  type RmwMsg = super::srv::rmw::Log_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__Log_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Log_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Log_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Log_Response {
  type RmwMsg = super::srv::rmw::Log_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      message: msg.message.to_string(),
      success: msg.success,
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__IsSaved_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsSaved_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for IsSaved_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsSaved_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsSaved_Request {
  type RmwMsg = super::srv::rmw::IsSaved_Request;

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


// Corresponds to eli_dashboard_interface__srv__IsSaved_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsSaved_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_saved: bool,

}



impl Default for IsSaved_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsSaved_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsSaved_Response {
  type RmwMsg = super::srv::rmw::IsSaved_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        is_saved: msg.is_saved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      is_saved: msg.is_saved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      is_saved: msg.is_saved,
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__CustomRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: std::string::String,

}



impl Default for CustomRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CustomRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CustomRequest_Request {
  type RmwMsg = super::srv::rmw::CustomRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: msg.request.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: msg.request.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: msg.request.to_string(),
    }
  }
}


// Corresponds to eli_dashboard_interface__srv__CustomRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: std::string::String,

}



impl Default for CustomRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CustomRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CustomRequest_Response {
  type RmwMsg = super::srv::rmw::CustomRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response.to_string(),
    }
  }
}






#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Load() -> *const std::ffi::c_void;
}

// Corresponds to eli_dashboard_interface__srv__Load
#[allow(missing_docs, non_camel_case_types)]
pub struct Load;

impl rosidl_runtime_rs::Service for Load {
    type Request = Load_Request;
    type Response = Load_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Load() }
    }
}




#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Popup() -> *const std::ffi::c_void;
}

// Corresponds to eli_dashboard_interface__srv__Popup
#[allow(missing_docs, non_camel_case_types)]
pub struct Popup;

impl rosidl_runtime_rs::Service for Popup {
    type Request = Popup_Request;
    type Response = Popup_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Popup() }
    }
}




#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Log() -> *const std::ffi::c_void;
}

// Corresponds to eli_dashboard_interface__srv__Log
#[allow(missing_docs, non_camel_case_types)]
pub struct Log;

impl rosidl_runtime_rs::Service for Log {
    type Request = Log_Request;
    type Response = Log_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__Log() }
    }
}




#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__IsSaved() -> *const std::ffi::c_void;
}

// Corresponds to eli_dashboard_interface__srv__IsSaved
#[allow(missing_docs, non_camel_case_types)]
pub struct IsSaved;

impl rosidl_runtime_rs::Service for IsSaved {
    type Request = IsSaved_Request;
    type Response = IsSaved_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__IsSaved() }
    }
}




#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__CustomRequest() -> *const std::ffi::c_void;
}

// Corresponds to eli_dashboard_interface__srv__CustomRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct CustomRequest;

impl rosidl_runtime_rs::Service for CustomRequest {
    type Request = CustomRequest_Request;
    type Response = CustomRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__eli_dashboard_interface__srv__CustomRequest() }
    }
}


