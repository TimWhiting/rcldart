#ifndef _H_24E8D7678D027ED15997D762791B90DD_SetParametersAtomically_DCPS_H_
#define _H_24E8D7678D027ED15997D762791B90DD_SetParametersAtomically_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetParametersAtomically_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class SetParametersAtomically_Request_TypeSupportInterface;

            typedef SetParametersAtomically_Request_TypeSupportInterface * SetParametersAtomically_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Request_TypeSupportInterface> SetParametersAtomically_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Request_TypeSupportInterface> SetParametersAtomically_Request_TypeSupportInterface_out;


            class SetParametersAtomically_Request_DataWriter;

            typedef SetParametersAtomically_Request_DataWriter * SetParametersAtomically_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Request_DataWriter> SetParametersAtomically_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Request_DataWriter> SetParametersAtomically_Request_DataWriter_out;


            class SetParametersAtomically_Request_DataReader;

            typedef SetParametersAtomically_Request_DataReader * SetParametersAtomically_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Request_DataReader> SetParametersAtomically_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Request_DataReader> SetParametersAtomically_Request_DataReader_out;


            class SetParametersAtomically_Request_DataReaderView;

            typedef SetParametersAtomically_Request_DataReaderView * SetParametersAtomically_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Request_DataReaderView> SetParametersAtomically_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Request_DataReaderView> SetParametersAtomically_Request_DataReaderView_out;

            struct SetParametersAtomically_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetParametersAtomically_Request_, struct SetParametersAtomically_Request_Seq_uniq_> SetParametersAtomically_Request_Seq;
            typedef DDS_DCPSSequence_var < SetParametersAtomically_Request_Seq> SetParametersAtomically_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetParametersAtomically_Request_Seq> SetParametersAtomically_Request_Seq_out;

            class  SetParametersAtomically_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetParametersAtomically_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetParametersAtomically_Request_TypeSupportInterface_var _var_type;

                static SetParametersAtomically_Request_TypeSupportInterface_ptr _duplicate (SetParametersAtomically_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetParametersAtomically_Request_TypeSupportInterface () {};
                ~SetParametersAtomically_Request_TypeSupportInterface () {};
            private:
                SetParametersAtomically_Request_TypeSupportInterface (const SetParametersAtomically_Request_TypeSupportInterface &);
                SetParametersAtomically_Request_TypeSupportInterface & operator = (const SetParametersAtomically_Request_TypeSupportInterface &);
            };

            class  SetParametersAtomically_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetParametersAtomically_Request_DataWriter_ptr _ptr_type;
                typedef SetParametersAtomically_Request_DataWriter_var _var_type;

                static SetParametersAtomically_Request_DataWriter_ptr _duplicate (SetParametersAtomically_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetParametersAtomically_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetParametersAtomically_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Request_& instance_data) = 0;

            protected:
                SetParametersAtomically_Request_DataWriter () {};
                ~SetParametersAtomically_Request_DataWriter () {};
            private:
                SetParametersAtomically_Request_DataWriter (const SetParametersAtomically_Request_DataWriter &);
                SetParametersAtomically_Request_DataWriter & operator = (const SetParametersAtomically_Request_DataWriter &);
            };

            class  SetParametersAtomically_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetParametersAtomically_Request_DataReader_ptr _ptr_type;
                typedef SetParametersAtomically_Request_DataReader_var _var_type;

                static SetParametersAtomically_Request_DataReader_ptr _duplicate (SetParametersAtomically_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Request_& instance) = 0;

            protected:
                SetParametersAtomically_Request_DataReader () {};
                ~SetParametersAtomically_Request_DataReader () {};
            private:
                SetParametersAtomically_Request_DataReader (const SetParametersAtomically_Request_DataReader &);
                SetParametersAtomically_Request_DataReader & operator = (const SetParametersAtomically_Request_DataReader &);
            };

            class  SetParametersAtomically_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetParametersAtomically_Request_DataReaderView_ptr _ptr_type;
                typedef SetParametersAtomically_Request_DataReaderView_var _var_type;

                static SetParametersAtomically_Request_DataReaderView_ptr _duplicate (SetParametersAtomically_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Request_& instance) = 0;

            protected:
                SetParametersAtomically_Request_DataReaderView () {};
                ~SetParametersAtomically_Request_DataReaderView () {};
            private:
                SetParametersAtomically_Request_DataReaderView (const SetParametersAtomically_Request_DataReaderView &);
                SetParametersAtomically_Request_DataReaderView & operator = (const SetParametersAtomically_Request_DataReaderView &);
            };
            class SetParametersAtomically_Response_TypeSupportInterface;

            typedef SetParametersAtomically_Response_TypeSupportInterface * SetParametersAtomically_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Response_TypeSupportInterface> SetParametersAtomically_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Response_TypeSupportInterface> SetParametersAtomically_Response_TypeSupportInterface_out;


            class SetParametersAtomically_Response_DataWriter;

            typedef SetParametersAtomically_Response_DataWriter * SetParametersAtomically_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Response_DataWriter> SetParametersAtomically_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Response_DataWriter> SetParametersAtomically_Response_DataWriter_out;


            class SetParametersAtomically_Response_DataReader;

            typedef SetParametersAtomically_Response_DataReader * SetParametersAtomically_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Response_DataReader> SetParametersAtomically_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Response_DataReader> SetParametersAtomically_Response_DataReader_out;


            class SetParametersAtomically_Response_DataReaderView;

            typedef SetParametersAtomically_Response_DataReaderView * SetParametersAtomically_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetParametersAtomically_Response_DataReaderView> SetParametersAtomically_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetParametersAtomically_Response_DataReaderView> SetParametersAtomically_Response_DataReaderView_out;

            struct SetParametersAtomically_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetParametersAtomically_Response_, struct SetParametersAtomically_Response_Seq_uniq_> SetParametersAtomically_Response_Seq;
            typedef DDS_DCPSSequence_var < SetParametersAtomically_Response_Seq> SetParametersAtomically_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetParametersAtomically_Response_Seq> SetParametersAtomically_Response_Seq_out;

            class  SetParametersAtomically_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetParametersAtomically_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetParametersAtomically_Response_TypeSupportInterface_var _var_type;

                static SetParametersAtomically_Response_TypeSupportInterface_ptr _duplicate (SetParametersAtomically_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetParametersAtomically_Response_TypeSupportInterface () {};
                ~SetParametersAtomically_Response_TypeSupportInterface () {};
            private:
                SetParametersAtomically_Response_TypeSupportInterface (const SetParametersAtomically_Response_TypeSupportInterface &);
                SetParametersAtomically_Response_TypeSupportInterface & operator = (const SetParametersAtomically_Response_TypeSupportInterface &);
            };

            class  SetParametersAtomically_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetParametersAtomically_Response_DataWriter_ptr _ptr_type;
                typedef SetParametersAtomically_Response_DataWriter_var _var_type;

                static SetParametersAtomically_Response_DataWriter_ptr _duplicate (SetParametersAtomically_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetParametersAtomically_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetParametersAtomically_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Response_& instance_data) = 0;

            protected:
                SetParametersAtomically_Response_DataWriter () {};
                ~SetParametersAtomically_Response_DataWriter () {};
            private:
                SetParametersAtomically_Response_DataWriter (const SetParametersAtomically_Response_DataWriter &);
                SetParametersAtomically_Response_DataWriter & operator = (const SetParametersAtomically_Response_DataWriter &);
            };

            class  SetParametersAtomically_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetParametersAtomically_Response_DataReader_ptr _ptr_type;
                typedef SetParametersAtomically_Response_DataReader_var _var_type;

                static SetParametersAtomically_Response_DataReader_ptr _duplicate (SetParametersAtomically_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Response_& instance) = 0;

            protected:
                SetParametersAtomically_Response_DataReader () {};
                ~SetParametersAtomically_Response_DataReader () {};
            private:
                SetParametersAtomically_Response_DataReader (const SetParametersAtomically_Response_DataReader &);
                SetParametersAtomically_Response_DataReader & operator = (const SetParametersAtomically_Response_DataReader &);
            };

            class  SetParametersAtomically_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetParametersAtomically_Response_DataReaderView_ptr _ptr_type;
                typedef SetParametersAtomically_Response_DataReaderView_var _var_type;

                static SetParametersAtomically_Response_DataReaderView_ptr _duplicate (SetParametersAtomically_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersAtomically_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersAtomically_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersAtomically_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersAtomically_Response_& instance) = 0;

            protected:
                SetParametersAtomically_Response_DataReaderView () {};
                ~SetParametersAtomically_Response_DataReaderView () {};
            private:
                SetParametersAtomically_Response_DataReaderView (const SetParametersAtomically_Response_DataReaderView &);
                SetParametersAtomically_Response_DataReaderView & operator = (const SetParametersAtomically_Response_DataReaderView &);
            };
            class Sample_SetParametersAtomically_Request_TypeSupportInterface;

            typedef Sample_SetParametersAtomically_Request_TypeSupportInterface * Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Request_TypeSupportInterface> Sample_SetParametersAtomically_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Request_TypeSupportInterface> Sample_SetParametersAtomically_Request_TypeSupportInterface_out;


            class Sample_SetParametersAtomically_Request_DataWriter;

            typedef Sample_SetParametersAtomically_Request_DataWriter * Sample_SetParametersAtomically_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Request_DataWriter> Sample_SetParametersAtomically_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Request_DataWriter> Sample_SetParametersAtomically_Request_DataWriter_out;


            class Sample_SetParametersAtomically_Request_DataReader;

            typedef Sample_SetParametersAtomically_Request_DataReader * Sample_SetParametersAtomically_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Request_DataReader> Sample_SetParametersAtomically_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Request_DataReader> Sample_SetParametersAtomically_Request_DataReader_out;


            class Sample_SetParametersAtomically_Request_DataReaderView;

            typedef Sample_SetParametersAtomically_Request_DataReaderView * Sample_SetParametersAtomically_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Request_DataReaderView> Sample_SetParametersAtomically_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Request_DataReaderView> Sample_SetParametersAtomically_Request_DataReaderView_out;

            struct Sample_SetParametersAtomically_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetParametersAtomically_Request_, struct Sample_SetParametersAtomically_Request_Seq_uniq_> Sample_SetParametersAtomically_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetParametersAtomically_Request_Seq> Sample_SetParametersAtomically_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetParametersAtomically_Request_Seq> Sample_SetParametersAtomically_Request_Seq_out;

            class  Sample_SetParametersAtomically_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Request_TypeSupportInterface_var _var_type;

                static Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _duplicate (Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetParametersAtomically_Request_TypeSupportInterface () {};
                ~Sample_SetParametersAtomically_Request_TypeSupportInterface () {};
            private:
                Sample_SetParametersAtomically_Request_TypeSupportInterface (const Sample_SetParametersAtomically_Request_TypeSupportInterface &);
                Sample_SetParametersAtomically_Request_TypeSupportInterface & operator = (const Sample_SetParametersAtomically_Request_TypeSupportInterface &);
            };

            class  Sample_SetParametersAtomically_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetParametersAtomically_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Request_DataWriter_var _var_type;

                static Sample_SetParametersAtomically_Request_DataWriter_ptr _duplicate (Sample_SetParametersAtomically_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetParametersAtomically_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetParametersAtomically_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetParametersAtomically_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Request_& instance_data) = 0;

            protected:
                Sample_SetParametersAtomically_Request_DataWriter () {};
                ~Sample_SetParametersAtomically_Request_DataWriter () {};
            private:
                Sample_SetParametersAtomically_Request_DataWriter (const Sample_SetParametersAtomically_Request_DataWriter &);
                Sample_SetParametersAtomically_Request_DataWriter & operator = (const Sample_SetParametersAtomically_Request_DataWriter &);
            };

            class  Sample_SetParametersAtomically_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetParametersAtomically_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Request_DataReader_var _var_type;

                static Sample_SetParametersAtomically_Request_DataReader_ptr _duplicate (Sample_SetParametersAtomically_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Request_& instance) = 0;

            protected:
                Sample_SetParametersAtomically_Request_DataReader () {};
                ~Sample_SetParametersAtomically_Request_DataReader () {};
            private:
                Sample_SetParametersAtomically_Request_DataReader (const Sample_SetParametersAtomically_Request_DataReader &);
                Sample_SetParametersAtomically_Request_DataReader & operator = (const Sample_SetParametersAtomically_Request_DataReader &);
            };

            class  Sample_SetParametersAtomically_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetParametersAtomically_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Request_DataReaderView_var _var_type;

                static Sample_SetParametersAtomically_Request_DataReaderView_ptr _duplicate (Sample_SetParametersAtomically_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParametersAtomically_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParametersAtomically_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Request_& instance) = 0;

            protected:
                Sample_SetParametersAtomically_Request_DataReaderView () {};
                ~Sample_SetParametersAtomically_Request_DataReaderView () {};
            private:
                Sample_SetParametersAtomically_Request_DataReaderView (const Sample_SetParametersAtomically_Request_DataReaderView &);
                Sample_SetParametersAtomically_Request_DataReaderView & operator = (const Sample_SetParametersAtomically_Request_DataReaderView &);
            };
            class Sample_SetParametersAtomically_Response_TypeSupportInterface;

            typedef Sample_SetParametersAtomically_Response_TypeSupportInterface * Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Response_TypeSupportInterface> Sample_SetParametersAtomically_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Response_TypeSupportInterface> Sample_SetParametersAtomically_Response_TypeSupportInterface_out;


            class Sample_SetParametersAtomically_Response_DataWriter;

            typedef Sample_SetParametersAtomically_Response_DataWriter * Sample_SetParametersAtomically_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Response_DataWriter> Sample_SetParametersAtomically_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Response_DataWriter> Sample_SetParametersAtomically_Response_DataWriter_out;


            class Sample_SetParametersAtomically_Response_DataReader;

            typedef Sample_SetParametersAtomically_Response_DataReader * Sample_SetParametersAtomically_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Response_DataReader> Sample_SetParametersAtomically_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Response_DataReader> Sample_SetParametersAtomically_Response_DataReader_out;


            class Sample_SetParametersAtomically_Response_DataReaderView;

            typedef Sample_SetParametersAtomically_Response_DataReaderView * Sample_SetParametersAtomically_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParametersAtomically_Response_DataReaderView> Sample_SetParametersAtomically_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetParametersAtomically_Response_DataReaderView> Sample_SetParametersAtomically_Response_DataReaderView_out;

            struct Sample_SetParametersAtomically_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetParametersAtomically_Response_, struct Sample_SetParametersAtomically_Response_Seq_uniq_> Sample_SetParametersAtomically_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetParametersAtomically_Response_Seq> Sample_SetParametersAtomically_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetParametersAtomically_Response_Seq> Sample_SetParametersAtomically_Response_Seq_out;

            class  Sample_SetParametersAtomically_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Response_TypeSupportInterface_var _var_type;

                static Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _duplicate (Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetParametersAtomically_Response_TypeSupportInterface () {};
                ~Sample_SetParametersAtomically_Response_TypeSupportInterface () {};
            private:
                Sample_SetParametersAtomically_Response_TypeSupportInterface (const Sample_SetParametersAtomically_Response_TypeSupportInterface &);
                Sample_SetParametersAtomically_Response_TypeSupportInterface & operator = (const Sample_SetParametersAtomically_Response_TypeSupportInterface &);
            };

            class  Sample_SetParametersAtomically_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetParametersAtomically_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Response_DataWriter_var _var_type;

                static Sample_SetParametersAtomically_Response_DataWriter_ptr _duplicate (Sample_SetParametersAtomically_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetParametersAtomically_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetParametersAtomically_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetParametersAtomically_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Response_& instance_data) = 0;

            protected:
                Sample_SetParametersAtomically_Response_DataWriter () {};
                ~Sample_SetParametersAtomically_Response_DataWriter () {};
            private:
                Sample_SetParametersAtomically_Response_DataWriter (const Sample_SetParametersAtomically_Response_DataWriter &);
                Sample_SetParametersAtomically_Response_DataWriter & operator = (const Sample_SetParametersAtomically_Response_DataWriter &);
            };

            class  Sample_SetParametersAtomically_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetParametersAtomically_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Response_DataReader_var _var_type;

                static Sample_SetParametersAtomically_Response_DataReader_ptr _duplicate (Sample_SetParametersAtomically_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Response_& instance) = 0;

            protected:
                Sample_SetParametersAtomically_Response_DataReader () {};
                ~Sample_SetParametersAtomically_Response_DataReader () {};
            private:
                Sample_SetParametersAtomically_Response_DataReader (const Sample_SetParametersAtomically_Response_DataReader &);
                Sample_SetParametersAtomically_Response_DataReader & operator = (const Sample_SetParametersAtomically_Response_DataReader &);
            };

            class  Sample_SetParametersAtomically_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetParametersAtomically_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetParametersAtomically_Response_DataReaderView_var _var_type;

                static Sample_SetParametersAtomically_Response_DataReaderView_ptr _duplicate (Sample_SetParametersAtomically_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParametersAtomically_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParametersAtomically_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParametersAtomically_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParametersAtomically_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParametersAtomically_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParametersAtomically_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParametersAtomically_Response_& instance) = 0;

            protected:
                Sample_SetParametersAtomically_Response_DataReaderView () {};
                ~Sample_SetParametersAtomically_Response_DataReaderView () {};
            private:
                Sample_SetParametersAtomically_Response_DataReaderView (const Sample_SetParametersAtomically_Response_DataReaderView &);
                Sample_SetParametersAtomically_Response_DataReaderView & operator = (const Sample_SetParametersAtomically_Response_DataReaderView &);
            };
        }

    }

}

#endif
