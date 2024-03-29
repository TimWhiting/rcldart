#ifndef _H_37E8461378925AFC5ACFD69BA147967C_GetParameters_DCPS_H_
#define _H_37E8461378925AFC5ACFD69BA147967C_GetParameters_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetParameters_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class GetParameters_Request_TypeSupportInterface;

            typedef GetParameters_Request_TypeSupportInterface * GetParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Request_TypeSupportInterface> GetParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetParameters_Request_TypeSupportInterface> GetParameters_Request_TypeSupportInterface_out;


            class GetParameters_Request_DataWriter;

            typedef GetParameters_Request_DataWriter * GetParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Request_DataWriter> GetParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetParameters_Request_DataWriter> GetParameters_Request_DataWriter_out;


            class GetParameters_Request_DataReader;

            typedef GetParameters_Request_DataReader * GetParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Request_DataReader> GetParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetParameters_Request_DataReader> GetParameters_Request_DataReader_out;


            class GetParameters_Request_DataReaderView;

            typedef GetParameters_Request_DataReaderView * GetParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Request_DataReaderView> GetParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetParameters_Request_DataReaderView> GetParameters_Request_DataReaderView_out;

            struct GetParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetParameters_Request_, struct GetParameters_Request_Seq_uniq_> GetParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < GetParameters_Request_Seq> GetParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetParameters_Request_Seq> GetParameters_Request_Seq_out;

            class  GetParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetParameters_Request_TypeSupportInterface_var _var_type;

                static GetParameters_Request_TypeSupportInterface_ptr _duplicate (GetParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetParameters_Request_TypeSupportInterface () {};
                ~GetParameters_Request_TypeSupportInterface () {};
            private:
                GetParameters_Request_TypeSupportInterface (const GetParameters_Request_TypeSupportInterface &);
                GetParameters_Request_TypeSupportInterface & operator = (const GetParameters_Request_TypeSupportInterface &);
            };

            class  GetParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetParameters_Request_DataWriter_ptr _ptr_type;
                typedef GetParameters_Request_DataWriter_var _var_type;

                static GetParameters_Request_DataWriter_ptr _duplicate (GetParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Request_& instance_data) = 0;

            protected:
                GetParameters_Request_DataWriter () {};
                ~GetParameters_Request_DataWriter () {};
            private:
                GetParameters_Request_DataWriter (const GetParameters_Request_DataWriter &);
                GetParameters_Request_DataWriter & operator = (const GetParameters_Request_DataWriter &);
            };

            class  GetParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetParameters_Request_DataReader_ptr _ptr_type;
                typedef GetParameters_Request_DataReader_var _var_type;

                static GetParameters_Request_DataReader_ptr _duplicate (GetParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Request_& instance) = 0;

            protected:
                GetParameters_Request_DataReader () {};
                ~GetParameters_Request_DataReader () {};
            private:
                GetParameters_Request_DataReader (const GetParameters_Request_DataReader &);
                GetParameters_Request_DataReader & operator = (const GetParameters_Request_DataReader &);
            };

            class  GetParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetParameters_Request_DataReaderView_ptr _ptr_type;
                typedef GetParameters_Request_DataReaderView_var _var_type;

                static GetParameters_Request_DataReaderView_ptr _duplicate (GetParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Request_& instance) = 0;

            protected:
                GetParameters_Request_DataReaderView () {};
                ~GetParameters_Request_DataReaderView () {};
            private:
                GetParameters_Request_DataReaderView (const GetParameters_Request_DataReaderView &);
                GetParameters_Request_DataReaderView & operator = (const GetParameters_Request_DataReaderView &);
            };
            class GetParameters_Response_TypeSupportInterface;

            typedef GetParameters_Response_TypeSupportInterface * GetParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Response_TypeSupportInterface> GetParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetParameters_Response_TypeSupportInterface> GetParameters_Response_TypeSupportInterface_out;


            class GetParameters_Response_DataWriter;

            typedef GetParameters_Response_DataWriter * GetParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Response_DataWriter> GetParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetParameters_Response_DataWriter> GetParameters_Response_DataWriter_out;


            class GetParameters_Response_DataReader;

            typedef GetParameters_Response_DataReader * GetParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Response_DataReader> GetParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetParameters_Response_DataReader> GetParameters_Response_DataReader_out;


            class GetParameters_Response_DataReaderView;

            typedef GetParameters_Response_DataReaderView * GetParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetParameters_Response_DataReaderView> GetParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetParameters_Response_DataReaderView> GetParameters_Response_DataReaderView_out;

            struct GetParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetParameters_Response_, struct GetParameters_Response_Seq_uniq_> GetParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < GetParameters_Response_Seq> GetParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetParameters_Response_Seq> GetParameters_Response_Seq_out;

            class  GetParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetParameters_Response_TypeSupportInterface_var _var_type;

                static GetParameters_Response_TypeSupportInterface_ptr _duplicate (GetParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetParameters_Response_TypeSupportInterface () {};
                ~GetParameters_Response_TypeSupportInterface () {};
            private:
                GetParameters_Response_TypeSupportInterface (const GetParameters_Response_TypeSupportInterface &);
                GetParameters_Response_TypeSupportInterface & operator = (const GetParameters_Response_TypeSupportInterface &);
            };

            class  GetParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetParameters_Response_DataWriter_ptr _ptr_type;
                typedef GetParameters_Response_DataWriter_var _var_type;

                static GetParameters_Response_DataWriter_ptr _duplicate (GetParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Response_& instance_data) = 0;

            protected:
                GetParameters_Response_DataWriter () {};
                ~GetParameters_Response_DataWriter () {};
            private:
                GetParameters_Response_DataWriter (const GetParameters_Response_DataWriter &);
                GetParameters_Response_DataWriter & operator = (const GetParameters_Response_DataWriter &);
            };

            class  GetParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetParameters_Response_DataReader_ptr _ptr_type;
                typedef GetParameters_Response_DataReader_var _var_type;

                static GetParameters_Response_DataReader_ptr _duplicate (GetParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Response_& instance) = 0;

            protected:
                GetParameters_Response_DataReader () {};
                ~GetParameters_Response_DataReader () {};
            private:
                GetParameters_Response_DataReader (const GetParameters_Response_DataReader &);
                GetParameters_Response_DataReader & operator = (const GetParameters_Response_DataReader &);
            };

            class  GetParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetParameters_Response_DataReaderView_ptr _ptr_type;
                typedef GetParameters_Response_DataReaderView_var _var_type;

                static GetParameters_Response_DataReaderView_ptr _duplicate (GetParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameters_Response_& instance) = 0;

            protected:
                GetParameters_Response_DataReaderView () {};
                ~GetParameters_Response_DataReaderView () {};
            private:
                GetParameters_Response_DataReaderView (const GetParameters_Response_DataReaderView &);
                GetParameters_Response_DataReaderView & operator = (const GetParameters_Response_DataReaderView &);
            };
            class Sample_GetParameters_Request_TypeSupportInterface;

            typedef Sample_GetParameters_Request_TypeSupportInterface * Sample_GetParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Request_TypeSupportInterface> Sample_GetParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Request_TypeSupportInterface> Sample_GetParameters_Request_TypeSupportInterface_out;


            class Sample_GetParameters_Request_DataWriter;

            typedef Sample_GetParameters_Request_DataWriter * Sample_GetParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Request_DataWriter> Sample_GetParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Request_DataWriter> Sample_GetParameters_Request_DataWriter_out;


            class Sample_GetParameters_Request_DataReader;

            typedef Sample_GetParameters_Request_DataReader * Sample_GetParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Request_DataReader> Sample_GetParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Request_DataReader> Sample_GetParameters_Request_DataReader_out;


            class Sample_GetParameters_Request_DataReaderView;

            typedef Sample_GetParameters_Request_DataReaderView * Sample_GetParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Request_DataReaderView> Sample_GetParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Request_DataReaderView> Sample_GetParameters_Request_DataReaderView_out;

            struct Sample_GetParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetParameters_Request_, struct Sample_GetParameters_Request_Seq_uniq_> Sample_GetParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetParameters_Request_Seq> Sample_GetParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetParameters_Request_Seq> Sample_GetParameters_Request_Seq_out;

            class  Sample_GetParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetParameters_Request_TypeSupportInterface_var _var_type;

                static Sample_GetParameters_Request_TypeSupportInterface_ptr _duplicate (Sample_GetParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetParameters_Request_TypeSupportInterface () {};
                ~Sample_GetParameters_Request_TypeSupportInterface () {};
            private:
                Sample_GetParameters_Request_TypeSupportInterface (const Sample_GetParameters_Request_TypeSupportInterface &);
                Sample_GetParameters_Request_TypeSupportInterface & operator = (const Sample_GetParameters_Request_TypeSupportInterface &);
            };

            class  Sample_GetParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetParameters_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetParameters_Request_DataWriter_var _var_type;

                static Sample_GetParameters_Request_DataWriter_ptr _duplicate (Sample_GetParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Request_& instance_data) = 0;

            protected:
                Sample_GetParameters_Request_DataWriter () {};
                ~Sample_GetParameters_Request_DataWriter () {};
            private:
                Sample_GetParameters_Request_DataWriter (const Sample_GetParameters_Request_DataWriter &);
                Sample_GetParameters_Request_DataWriter & operator = (const Sample_GetParameters_Request_DataWriter &);
            };

            class  Sample_GetParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetParameters_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetParameters_Request_DataReader_var _var_type;

                static Sample_GetParameters_Request_DataReader_ptr _duplicate (Sample_GetParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Request_& instance) = 0;

            protected:
                Sample_GetParameters_Request_DataReader () {};
                ~Sample_GetParameters_Request_DataReader () {};
            private:
                Sample_GetParameters_Request_DataReader (const Sample_GetParameters_Request_DataReader &);
                Sample_GetParameters_Request_DataReader & operator = (const Sample_GetParameters_Request_DataReader &);
            };

            class  Sample_GetParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetParameters_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetParameters_Request_DataReaderView_var _var_type;

                static Sample_GetParameters_Request_DataReaderView_ptr _duplicate (Sample_GetParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Request_& instance) = 0;

            protected:
                Sample_GetParameters_Request_DataReaderView () {};
                ~Sample_GetParameters_Request_DataReaderView () {};
            private:
                Sample_GetParameters_Request_DataReaderView (const Sample_GetParameters_Request_DataReaderView &);
                Sample_GetParameters_Request_DataReaderView & operator = (const Sample_GetParameters_Request_DataReaderView &);
            };
            class Sample_GetParameters_Response_TypeSupportInterface;

            typedef Sample_GetParameters_Response_TypeSupportInterface * Sample_GetParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Response_TypeSupportInterface> Sample_GetParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Response_TypeSupportInterface> Sample_GetParameters_Response_TypeSupportInterface_out;


            class Sample_GetParameters_Response_DataWriter;

            typedef Sample_GetParameters_Response_DataWriter * Sample_GetParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Response_DataWriter> Sample_GetParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Response_DataWriter> Sample_GetParameters_Response_DataWriter_out;


            class Sample_GetParameters_Response_DataReader;

            typedef Sample_GetParameters_Response_DataReader * Sample_GetParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Response_DataReader> Sample_GetParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Response_DataReader> Sample_GetParameters_Response_DataReader_out;


            class Sample_GetParameters_Response_DataReaderView;

            typedef Sample_GetParameters_Response_DataReaderView * Sample_GetParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameters_Response_DataReaderView> Sample_GetParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameters_Response_DataReaderView> Sample_GetParameters_Response_DataReaderView_out;

            struct Sample_GetParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetParameters_Response_, struct Sample_GetParameters_Response_Seq_uniq_> Sample_GetParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetParameters_Response_Seq> Sample_GetParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetParameters_Response_Seq> Sample_GetParameters_Response_Seq_out;

            class  Sample_GetParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetParameters_Response_TypeSupportInterface_var _var_type;

                static Sample_GetParameters_Response_TypeSupportInterface_ptr _duplicate (Sample_GetParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetParameters_Response_TypeSupportInterface () {};
                ~Sample_GetParameters_Response_TypeSupportInterface () {};
            private:
                Sample_GetParameters_Response_TypeSupportInterface (const Sample_GetParameters_Response_TypeSupportInterface &);
                Sample_GetParameters_Response_TypeSupportInterface & operator = (const Sample_GetParameters_Response_TypeSupportInterface &);
            };

            class  Sample_GetParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetParameters_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetParameters_Response_DataWriter_var _var_type;

                static Sample_GetParameters_Response_DataWriter_ptr _duplicate (Sample_GetParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Response_& instance_data) = 0;

            protected:
                Sample_GetParameters_Response_DataWriter () {};
                ~Sample_GetParameters_Response_DataWriter () {};
            private:
                Sample_GetParameters_Response_DataWriter (const Sample_GetParameters_Response_DataWriter &);
                Sample_GetParameters_Response_DataWriter & operator = (const Sample_GetParameters_Response_DataWriter &);
            };

            class  Sample_GetParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetParameters_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetParameters_Response_DataReader_var _var_type;

                static Sample_GetParameters_Response_DataReader_ptr _duplicate (Sample_GetParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Response_& instance) = 0;

            protected:
                Sample_GetParameters_Response_DataReader () {};
                ~Sample_GetParameters_Response_DataReader () {};
            private:
                Sample_GetParameters_Response_DataReader (const Sample_GetParameters_Response_DataReader &);
                Sample_GetParameters_Response_DataReader & operator = (const Sample_GetParameters_Response_DataReader &);
            };

            class  Sample_GetParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetParameters_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetParameters_Response_DataReaderView_var _var_type;

                static Sample_GetParameters_Response_DataReaderView_ptr _duplicate (Sample_GetParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameters_Response_& instance) = 0;

            protected:
                Sample_GetParameters_Response_DataReaderView () {};
                ~Sample_GetParameters_Response_DataReaderView () {};
            private:
                Sample_GetParameters_Response_DataReaderView (const Sample_GetParameters_Response_DataReaderView &);
                Sample_GetParameters_Response_DataReaderView & operator = (const Sample_GetParameters_Response_DataReaderView &);
            };
        }

    }

}

#endif
