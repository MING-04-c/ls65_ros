#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetTaskStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetTaskStatus_Request__init(msg: *mut GetTaskStatus_Request) -> bool;
    fn eli_common_interface__srv__GetTaskStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__GetTaskStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Request>);
    fn eli_common_interface__srv__GetTaskStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetTaskStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTaskStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetTaskStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetTaskStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetTaskStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetTaskStatus_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetTaskStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetTaskStatus_Response__init(msg: *mut GetTaskStatus_Response) -> bool;
    fn eli_common_interface__srv__GetTaskStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__GetTaskStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Response>);
    fn eli_common_interface__srv__GetTaskStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskStatus_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetTaskStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: super::super::msg::rmw::TaskStatus,

}



impl Default for GetTaskStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetTaskStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetTaskStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetTaskStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetTaskStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetTaskStatus_Response() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetRobotMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetRobotMode_Request__init(msg: *mut GetRobotMode_Request) -> bool;
    fn eli_common_interface__srv__GetRobotMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__GetRobotMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Request>);
    fn eli_common_interface__srv__GetRobotMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetRobotMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetRobotMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetRobotMode_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetRobotMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetRobotMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetRobotMode_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetRobotMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetRobotMode_Response__init(msg: *mut GetRobotMode_Response) -> bool;
    fn eli_common_interface__srv__GetRobotMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__GetRobotMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Response>);
    fn eli_common_interface__srv__GetRobotMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotMode_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetRobotMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::RobotMode,

}



impl Default for GetRobotMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetRobotMode_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetRobotMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetRobotMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetRobotMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetRobotMode_Response() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetSafetyMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetSafetyMode_Request__init(msg: *mut GetSafetyMode_Request) -> bool;
    fn eli_common_interface__srv__GetSafetyMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__GetSafetyMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Request>);
    fn eli_common_interface__srv__GetSafetyMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSafetyMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetSafetyMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSafetyMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSafetyMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetSafetyMode_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetSafetyMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSafetyMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSafetyMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSafetyMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetSafetyMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetSafetyMode_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetSafetyMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__GetSafetyMode_Response__init(msg: *mut GetSafetyMode_Response) -> bool;
    fn eli_common_interface__srv__GetSafetyMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__GetSafetyMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Response>);
    fn eli_common_interface__srv__GetSafetyMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSafetyMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSafetyMode_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__GetSafetyMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSafetyMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::SafetyMode,

}



impl Default for GetSafetyMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__GetSafetyMode_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__GetSafetyMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSafetyMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__GetSafetyMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSafetyMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSafetyMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/GetSafetyMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__GetSafetyMode_Response() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetIO_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetIO_Request__init(msg: *mut SetIO_Request) -> bool;
    fn eli_common_interface__srv__SetIO_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__SetIO_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>);
    fn eli_common_interface__srv__SetIO_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetIO_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetIO_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetIO_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetIO_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetIO_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetIO_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetIO_Response__init(msg: *mut SetIO_Response) -> bool;
    fn eli_common_interface__srv__SetIO_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__SetIO_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>);
    fn eli_common_interface__srv__SetIO_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetIO_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetIO_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetIO_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetIO_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetIO_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetIO_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetIO_Response() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetSpeedSliderFraction_Request__init(msg: *mut SetSpeedSliderFraction_Request) -> bool;
    fn eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>);
    fn eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetSpeedSliderFraction_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_slider_fraction: f64,

}



impl Default for SetSpeedSliderFraction_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetSpeedSliderFraction_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetSpeedSliderFraction_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeedSliderFraction_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeedSliderFraction_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetSpeedSliderFraction_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetSpeedSliderFraction_Response__init(msg: *mut SetSpeedSliderFraction_Response) -> bool;
    fn eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>);
    fn eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetSpeedSliderFraction_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeedSliderFraction_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetSpeedSliderFraction_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetSpeedSliderFraction_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeedSliderFraction_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeedSliderFraction_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetSpeedSliderFraction_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetSpeedSliderFraction_Response() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetPayload_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetPayload_Request__init(msg: *mut SetPayload_Request) -> bool;
    fn eli_common_interface__srv__SetPayload_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>, size: usize) -> bool;
    fn eli_common_interface__srv__SetPayload_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>);
    fn eli_common_interface__srv__SetPayload_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPayload_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetPayload_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mass: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_of_gravity: geometry_msgs::msg::rmw::Vector3,

}



impl Default for SetPayload_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetPayload_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetPayload_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPayload_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPayload_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetPayload_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetPayload_Request() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetPayload_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__srv__SetPayload_Response__init(msg: *mut SetPayload_Response) -> bool;
    fn eli_common_interface__srv__SetPayload_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>, size: usize) -> bool;
    fn eli_common_interface__srv__SetPayload_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>);
    fn eli_common_interface__srv__SetPayload_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPayload_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>) -> bool;
}

// Corresponds to eli_common_interface__srv__SetPayload_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetPayload_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__srv__SetPayload_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__srv__SetPayload_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPayload_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__srv__SetPayload_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPayload_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/srv/SetPayload_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__srv__SetPayload_Response() }
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


