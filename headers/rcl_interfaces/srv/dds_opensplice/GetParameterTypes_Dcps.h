#ifndef _H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes_DCPS_H_
#define _H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetParameterTypes_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class GetParameterTypes_Request_TypeSupportInterface;

            typedef GetParameterTypes_Request_TypeSupportInterface * GetParameterTypes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Request_TypeSupportInterface> GetParameterTypes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Request_TypeSupportInterface> GetParameterTypes_Request_TypeSupportInterface_out;


            class GetParameterTypes_Request_DataWriter;

            typedef GetParameterTypes_Request_DataWriter * GetParameterTypes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Request_DataWriter> GetParameterTypes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Request_DataWriter> GetParameterTypes_Request_DataWriter_out;


            class GetParameterTypes_Request_DataReader;

            typedef GetParameterTypes_Request_DataReader * GetParameterTypes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Request_DataReader> GetParameterTypes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Request_DataReader> GetParameterTypes_Request_DataReader_out;


            class GetParameterTypes_Request_DataReaderView;

            typedef GetParameterTypes_Request_DataReaderView * GetParameterTypes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Request_DataReaderView> GetParameterTypes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Request_DataReaderView> GetParameterTypes_Request_DataReaderView_out;

            struct GetParameterTypes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetParameterTypes_Request_, struct GetParameterTypes_Request_Seq_uniq_> GetParameterTypes_Request_Seq;
            typedef DDS_DCPSSequence_var < GetParameterTypes_Request_Seq> GetParameterTypes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetParameterTypes_Request_Seq> GetParameterTypes_Request_Seq_out;

            class  GetParameterTypes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetParameterTypes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetParameterTypes_Request_TypeSupportInterface_var _var_type;

                static GetParameterTypes_Request_TypeSupportInterface_ptr _duplicate (GetParameterTypes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetParameterTypes_Request_TypeSupportInterface () {};
                ~GetParameterTypes_Request_TypeSupportInterface () {};
            private:
                GetParameterTypes_Request_TypeSupportInterface (const GetParameterTypes_Request_TypeSupportInterface &);
                GetParameterTypes_Request_TypeSupportInterface & operator = (const GetParameterTypes_Request_TypeSupportInterface &);
            };

            class  GetParameterTypes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetParameterTypes_Request_DataWriter_ptr _ptr_type;
                typedef GetParameterTypes_Request_DataWriter_var _var_type;

                static GetParameterTypes_Request_DataWriter_ptr _duplicate (GetParameterTypes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetParameterTypes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetParameterTypes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Request_& instance_data) = 0;

            protected:
                GetParameterTypes_Request_DataWriter () {};
                ~GetParameterTypes_Request_DataWriter () {};
            private:
                GetParameterTypes_Request_DataWriter (const GetParameterTypes_Request_DataWriter &);
                GetParameterTypes_Request_DataWriter & operator = (const GetParameterTypes_Request_DataWriter &);
            };

            class  GetParameterTypes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetParameterTypes_Request_DataReader_ptr _ptr_type;
                typedef GetParameterTypes_Request_DataReader_var _var_type;

                static GetParameterTypes_Request_DataReader_ptr _duplicate (GetParameterTypes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Request_& instance) = 0;

            protected:
                GetParameterTypes_Request_DataReader () {};
                ~GetParameterTypes_Request_DataReader () {};
            private:
                GetParameterTypes_Request_DataReader (const GetParameterTypes_Request_DataReader &);
                GetParameterTypes_Request_DataReader & operator = (const GetParameterTypes_Request_DataReader &);
            };

            class  GetParameterTypes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetParameterTypes_Request_DataReaderView_ptr _ptr_type;
                typedef GetParameterTypes_Request_DataReaderView_var _var_type;

                static GetParameterTypes_Request_DataReaderView_ptr _duplicate (GetParameterTypes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Request_& instance) = 0;

            protected:
                GetParameterTypes_Request_DataReaderView () {};
                ~GetParameterTypes_Request_DataReaderView () {};
            private:
                GetParameterTypes_Request_DataReaderView (const GetParameterTypes_Request_DataReaderView &);
                GetParameterTypes_Request_DataReaderView & operator = (const GetParameterTypes_Request_DataReaderView &);
            };
            class GetParameterTypes_Response_TypeSupportInterface;

            typedef GetParameterTypes_Response_TypeSupportInterface * GetParameterTypes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Response_TypeSupportInterface> GetParameterTypes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Response_TypeSupportInterface> GetParameterTypes_Response_TypeSupportInterface_out;


            class GetParameterTypes_Response_DataWriter;

            typedef GetParameterTypes_Response_DataWriter * GetParameterTypes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Response_DataWriter> GetParameterTypes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Response_DataWriter> GetParameterTypes_Response_DataWriter_out;


            class GetParameterTypes_Response_DataReader;

            typedef GetParameterTypes_Response_DataReader * GetParameterTypes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Response_DataReader> GetParameterTypes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Response_DataReader> GetParameterTypes_Response_DataReader_out;


            class GetParameterTypes_Response_DataReaderView;

            typedef GetParameterTypes_Response_DataReaderView * GetParameterTypes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetParameterTypes_Response_DataReaderView> GetParameterTypes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetParameterTypes_Response_DataReaderView> GetParameterTypes_Response_DataReaderView_out;

            struct GetParameterTypes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetParameterTypes_Response_, struct GetParameterTypes_Response_Seq_uniq_> GetParameterTypes_Response_Seq;
            typedef DDS_DCPSSequence_var < GetParameterTypes_Response_Seq> GetParameterTypes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetParameterTypes_Response_Seq> GetParameterTypes_Response_Seq_out;

            class  GetParameterTypes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetParameterTypes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetParameterTypes_Response_TypeSupportInterface_var _var_type;

                static GetParameterTypes_Response_TypeSupportInterface_ptr _duplicate (GetParameterTypes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetParameterTypes_Response_TypeSupportInterface () {};
                ~GetParameterTypes_Response_TypeSupportInterface () {};
            private:
                GetParameterTypes_Response_TypeSupportInterface (const GetParameterTypes_Response_TypeSupportInterface &);
                GetParameterTypes_Response_TypeSupportInterface & operator = (const GetParameterTypes_Response_TypeSupportInterface &);
            };

            class  GetParameterTypes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetParameterTypes_Response_DataWriter_ptr _ptr_type;
                typedef GetParameterTypes_Response_DataWriter_var _var_type;

                static GetParameterTypes_Response_DataWriter_ptr _duplicate (GetParameterTypes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetParameterTypes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetParameterTypes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Response_& instance_data) = 0;

            protected:
                GetParameterTypes_Response_DataWriter () {};
                ~GetParameterTypes_Response_DataWriter () {};
            private:
                GetParameterTypes_Response_DataWriter (const GetParameterTypes_Response_DataWriter &);
                GetParameterTypes_Response_DataWriter & operator = (const GetParameterTypes_Response_DataWriter &);
            };

            class  GetParameterTypes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetParameterTypes_Response_DataReader_ptr _ptr_type;
                typedef GetParameterTypes_Response_DataReader_var _var_type;

                static GetParameterTypes_Response_DataReader_ptr _duplicate (GetParameterTypes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Response_& instance) = 0;

            protected:
                GetParameterTypes_Response_DataReader () {};
                ~GetParameterTypes_Response_DataReader () {};
            private:
                GetParameterTypes_Response_DataReader (const GetParameterTypes_Response_DataReader &);
                GetParameterTypes_Response_DataReader & operator = (const GetParameterTypes_Response_DataReader &);
            };

            class  GetParameterTypes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetParameterTypes_Response_DataReaderView_ptr _ptr_type;
                typedef GetParameterTypes_Response_DataReaderView_var _var_type;

                static GetParameterTypes_Response_DataReaderView_ptr _duplicate (GetParameterTypes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetParameterTypes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetParameterTypes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetParameterTypes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetParameterTypes_Response_& instance) = 0;

            protected:
                GetParameterTypes_Response_DataReaderView () {};
                ~GetParameterTypes_Response_DataReaderView () {};
            private:
                GetParameterTypes_Response_DataReaderView (const GetParameterTypes_Response_DataReaderView &);
                GetParameterTypes_Response_DataReaderView & operator = (const GetParameterTypes_Response_DataReaderView &);
            };
            class Sample_GetParameterTypes_Request_TypeSupportInterface;

            typedef Sample_GetParameterTypes_Request_TypeSupportInterface * Sample_GetParameterTypes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_TypeSupportInterface> Sample_GetParameterTypes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_TypeSupportInterface> Sample_GetParameterTypes_Request_TypeSupportInterface_out;


            class Sample_GetParameterTypes_Request_DataWriter;

            typedef Sample_GetParameterTypes_Request_DataWriter * Sample_GetParameterTypes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataWriter> Sample_GetParameterTypes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataWriter> Sample_GetParameterTypes_Request_DataWriter_out;


            class Sample_GetParameterTypes_Request_DataReader;

            typedef Sample_GetParameterTypes_Request_DataReader * Sample_GetParameterTypes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataReader> Sample_GetParameterTypes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataReader> Sample_GetParameterTypes_Request_DataReader_out;


            class Sample_GetParameterTypes_Request_DataReaderView;

            typedef Sample_GetParameterTypes_Request_DataReaderView * Sample_GetParameterTypes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataReaderView> Sample_GetParameterTypes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataReaderView> Sample_GetParameterTypes_Request_DataReaderView_out;

            struct Sample_GetParameterTypes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetParameterTypes_Request_, struct Sample_GetParameterTypes_Request_Seq_uniq_> Sample_GetParameterTypes_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetParameterTypes_Request_Seq> Sample_GetParameterTypes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetParameterTypes_Request_Seq> Sample_GetParameterTypes_Request_Seq_out;

            class  Sample_GetParameterTypes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Request_TypeSupportInterface_var _var_type;

                static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _duplicate (Sample_GetParameterTypes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetParameterTypes_Request_TypeSupportInterface () {};
                ~Sample_GetParameterTypes_Request_TypeSupportInterface () {};
            private:
                Sample_GetParameterTypes_Request_TypeSupportInterface (const Sample_GetParameterTypes_Request_TypeSupportInterface &);
                Sample_GetParameterTypes_Request_TypeSupportInterface & operator = (const Sample_GetParameterTypes_Request_TypeSupportInterface &);
            };

            class  Sample_GetParameterTypes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetParameterTypes_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Request_DataWriter_var _var_type;

                static Sample_GetParameterTypes_Request_DataWriter_ptr _duplicate (Sample_GetParameterTypes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetParameterTypes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance_data) = 0;

            protected:
                Sample_GetParameterTypes_Request_DataWriter () {};
                ~Sample_GetParameterTypes_Request_DataWriter () {};
            private:
                Sample_GetParameterTypes_Request_DataWriter (const Sample_GetParameterTypes_Request_DataWriter &);
                Sample_GetParameterTypes_Request_DataWriter & operator = (const Sample_GetParameterTypes_Request_DataWriter &);
            };

            class  Sample_GetParameterTypes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetParameterTypes_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Request_DataReader_var _var_type;

                static Sample_GetParameterTypes_Request_DataReader_ptr _duplicate (Sample_GetParameterTypes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance) = 0;

            protected:
                Sample_GetParameterTypes_Request_DataReader () {};
                ~Sample_GetParameterTypes_Request_DataReader () {};
            private:
                Sample_GetParameterTypes_Request_DataReader (const Sample_GetParameterTypes_Request_DataReader &);
                Sample_GetParameterTypes_Request_DataReader & operator = (const Sample_GetParameterTypes_Request_DataReader &);
            };

            class  Sample_GetParameterTypes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetParameterTypes_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Request_DataReaderView_var _var_type;

                static Sample_GetParameterTypes_Request_DataReaderView_ptr _duplicate (Sample_GetParameterTypes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance) = 0;

            protected:
                Sample_GetParameterTypes_Request_DataReaderView () {};
                ~Sample_GetParameterTypes_Request_DataReaderView () {};
            private:
                Sample_GetParameterTypes_Request_DataReaderView (const Sample_GetParameterTypes_Request_DataReaderView &);
                Sample_GetParameterTypes_Request_DataReaderView & operator = (const Sample_GetParameterTypes_Request_DataReaderView &);
            };
            class Sample_GetParameterTypes_Response_TypeSupportInterface;

            typedef Sample_GetParameterTypes_Response_TypeSupportInterface * Sample_GetParameterTypes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Response_TypeSupportInterface> Sample_GetParameterTypes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Response_TypeSupportInterface> Sample_GetParameterTypes_Response_TypeSupportInterface_out;


            class Sample_GetParameterTypes_Response_DataWriter;

            typedef Sample_GetParameterTypes_Response_DataWriter * Sample_GetParameterTypes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Response_DataWriter> Sample_GetParameterTypes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Response_DataWriter> Sample_GetParameterTypes_Response_DataWriter_out;


            class Sample_GetParameterTypes_Response_DataReader;

            typedef Sample_GetParameterTypes_Response_DataReader * Sample_GetParameterTypes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Response_DataReader> Sample_GetParameterTypes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Response_DataReader> Sample_GetParameterTypes_Response_DataReader_out;


            class Sample_GetParameterTypes_Response_DataReaderView;

            typedef Sample_GetParameterTypes_Response_DataReaderView * Sample_GetParameterTypes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Response_DataReaderView> Sample_GetParameterTypes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Response_DataReaderView> Sample_GetParameterTypes_Response_DataReaderView_out;

            struct Sample_GetParameterTypes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetParameterTypes_Response_, struct Sample_GetParameterTypes_Response_Seq_uniq_> Sample_GetParameterTypes_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetParameterTypes_Response_Seq> Sample_GetParameterTypes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetParameterTypes_Response_Seq> Sample_GetParameterTypes_Response_Seq_out;

            class  Sample_GetParameterTypes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Response_TypeSupportInterface_var _var_type;

                static Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _duplicate (Sample_GetParameterTypes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetParameterTypes_Response_TypeSupportInterface () {};
                ~Sample_GetParameterTypes_Response_TypeSupportInterface () {};
            private:
                Sample_GetParameterTypes_Response_TypeSupportInterface (const Sample_GetParameterTypes_Response_TypeSupportInterface &);
                Sample_GetParameterTypes_Response_TypeSupportInterface & operator = (const Sample_GetParameterTypes_Response_TypeSupportInterface &);
            };

            class  Sample_GetParameterTypes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetParameterTypes_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Response_DataWriter_var _var_type;

                static Sample_GetParameterTypes_Response_DataWriter_ptr _duplicate (Sample_GetParameterTypes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetParameterTypes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetParameterTypes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetParameterTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Response_& instance_data) = 0;

            protected:
                Sample_GetParameterTypes_Response_DataWriter () {};
                ~Sample_GetParameterTypes_Response_DataWriter () {};
            private:
                Sample_GetParameterTypes_Response_DataWriter (const Sample_GetParameterTypes_Response_DataWriter &);
                Sample_GetParameterTypes_Response_DataWriter & operator = (const Sample_GetParameterTypes_Response_DataWriter &);
            };

            class  Sample_GetParameterTypes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetParameterTypes_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Response_DataReader_var _var_type;

                static Sample_GetParameterTypes_Response_DataReader_ptr _duplicate (Sample_GetParameterTypes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Response_& instance) = 0;

            protected:
                Sample_GetParameterTypes_Response_DataReader () {};
                ~Sample_GetParameterTypes_Response_DataReader () {};
            private:
                Sample_GetParameterTypes_Response_DataReader (const Sample_GetParameterTypes_Response_DataReader &);
                Sample_GetParameterTypes_Response_DataReader & operator = (const Sample_GetParameterTypes_Response_DataReader &);
            };

            class  Sample_GetParameterTypes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetParameterTypes_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetParameterTypes_Response_DataReaderView_var _var_type;

                static Sample_GetParameterTypes_Response_DataReaderView_ptr _duplicate (Sample_GetParameterTypes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetParameterTypes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetParameterTypes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetParameterTypes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetParameterTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetParameterTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Response_& instance) = 0;

            protected:
                Sample_GetParameterTypes_Response_DataReaderView () {};
                ~Sample_GetParameterTypes_Response_DataReaderView () {};
            private:
                Sample_GetParameterTypes_Response_DataReaderView (const Sample_GetParameterTypes_Response_DataReaderView &);
                Sample_GetParameterTypes_Response_DataReaderView & operator = (const Sample_GetParameterTypes_Response_DataReaderView &);
            };
        }

    }

}

#endif
