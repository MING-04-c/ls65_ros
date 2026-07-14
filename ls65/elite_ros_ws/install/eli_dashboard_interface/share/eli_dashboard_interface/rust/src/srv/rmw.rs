#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Load_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Load_Request__init(msg: *mut Load_Request) -> bool;
    fn eli_dashboard_interface__srv__Load_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Load_Request>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Load_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Load_Request>);
    fn eli_dashboard_interface__srv__Load_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Load_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Load_Request>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Load_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Load_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub filename: rosidl_runtime_rs::String,

}



impl Default for Load_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Load_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Load_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Load_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Load_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Load_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Load_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Load_Request() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Load_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Load_Response__init(msg: *mut Load_Response) -> bool;
    fn eli_dashboard_interface__srv__Load_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Load_Response>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Load_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Load_Response>);
    fn eli_dashboard_interface__srv__Load_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Load_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Load_Response>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Load_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Load_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub answer: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Load_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Load_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Load_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Load_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Load_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Load_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Load_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Load_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Load_Response() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Popup_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Popup_Request__init(msg: *mut Popup_Request) -> bool;
    fn eli_dashboard_interface__srv__Popup_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Popup_Request>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Popup_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Popup_Request>);
    fn eli_dashboard_interface__srv__Popup_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Popup_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Popup_Request>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Popup_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Popup_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arg: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Popup_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Popup_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Popup_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Popup_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Popup_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Popup_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Popup_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Popup_Request() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Popup_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Popup_Response__init(msg: *mut Popup_Response) -> bool;
    fn eli_dashboard_interface__srv__Popup_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Popup_Response>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Popup_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Popup_Response>);
    fn eli_dashboard_interface__srv__Popup_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Popup_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Popup_Response>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Popup_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Popup_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Popup_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Popup_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Popup_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Popup_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Popup_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Popup_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Popup_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Popup_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Popup_Response() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Log_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Log_Request__init(msg: *mut Log_Request) -> bool;
    fn eli_dashboard_interface__srv__Log_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Log_Request>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Log_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Log_Request>);
    fn eli_dashboard_interface__srv__Log_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Log_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Log_Request>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Log_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Log_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Log_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Log_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Log_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Log_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Log_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Log_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Log_Request() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Log_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__Log_Response__init(msg: *mut Log_Response) -> bool;
    fn eli_dashboard_interface__srv__Log_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Log_Response>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__Log_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Log_Response>);
    fn eli_dashboard_interface__srv__Log_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Log_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Log_Response>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__Log_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Log_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__Log_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__Log_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Log_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__Log_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Log_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Log_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/Log_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__Log_Response() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__IsSaved_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__IsSaved_Request__init(msg: *mut IsSaved_Request) -> bool;
    fn eli_dashboard_interface__srv__IsSaved_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Request>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__IsSaved_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Request>);
    fn eli_dashboard_interface__srv__IsSaved_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsSaved_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Request>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__IsSaved_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsSaved_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for IsSaved_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__IsSaved_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__IsSaved_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsSaved_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsSaved_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsSaved_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/IsSaved_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__IsSaved_Request() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__IsSaved_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__IsSaved_Response__init(msg: *mut IsSaved_Response) -> bool;
    fn eli_dashboard_interface__srv__IsSaved_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Response>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__IsSaved_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Response>);
    fn eli_dashboard_interface__srv__IsSaved_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsSaved_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsSaved_Response>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__IsSaved_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsSaved_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_saved: bool,

}



impl Default for IsSaved_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__IsSaved_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__IsSaved_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsSaved_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__IsSaved_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsSaved_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsSaved_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/IsSaved_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__IsSaved_Response() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__CustomRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__CustomRequest_Request__init(msg: *mut CustomRequest_Request) -> bool;
    fn eli_dashboard_interface__srv__CustomRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Request>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__CustomRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Request>);
    fn eli_dashboard_interface__srv__CustomRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Request>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__CustomRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: rosidl_runtime_rs::String,

}



impl Default for CustomRequest_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__CustomRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__CustomRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/CustomRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__CustomRequest_Request() }
  }
}


#[link(name = "eli_dashboard_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__CustomRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "eli_dashboard_interface__rosidl_generator_c")]
extern "C" {
    fn eli_dashboard_interface__srv__CustomRequest_Response__init(msg: *mut CustomRequest_Response) -> bool;
    fn eli_dashboard_interface__srv__CustomRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Response>, size: usize) -> bool;
    fn eli_dashboard_interface__srv__CustomRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Response>);
    fn eli_dashboard_interface__srv__CustomRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomRequest_Response>) -> bool;
}

// Corresponds to eli_dashboard_interface__srv__CustomRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: rosidl_runtime_rs::String,

}



impl Default for CustomRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_dashboard_interface__srv__CustomRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to eli_dashboard_interface__srv__CustomRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_dashboard_interface__srv__CustomRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "eli_dashboard_interface/srv/CustomRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_dashboard_interface__srv__CustomRequest_Response() }
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


