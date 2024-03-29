#ifndef _H_74C9E46326C2AA04465202C0F3184831_ParameterType_DCPS_H_
#define _H_74C9E46326C2AA04465202C0F3184831_ParameterType_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ParameterType_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ParameterType_TypeSupportInterface;

            typedef ParameterType_TypeSupportInterface * ParameterType_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ParameterType_TypeSupportInterface> ParameterType_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ParameterType_TypeSupportInterface> ParameterType_TypeSupportInterface_out;


            class ParameterType_DataWriter;

            typedef ParameterType_DataWriter * ParameterType_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ParameterType_DataWriter> ParameterType_DataWriter_var;
            typedef DDS_DCPSInterface_out < ParameterType_DataWriter> ParameterType_DataWriter_out;


            class ParameterType_DataReader;

            typedef ParameterType_DataReader * ParameterType_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ParameterType_DataReader> ParameterType_DataReader_var;
            typedef DDS_DCPSInterface_out < ParameterType_DataReader> ParameterType_DataReader_out;


            class ParameterType_DataReaderView;

            typedef ParameterType_DataReaderView * ParameterType_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ParameterType_DataReaderView> ParameterType_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ParameterType_DataReaderView> ParameterType_DataReaderView_out;

            struct ParameterType_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ParameterType_, struct ParameterType_Seq_uniq_> ParameterType_Seq;
            typedef DDS_DCPSSequence_var < ParameterType_Seq> ParameterType_Seq_var;
            typedef DDS_DCPSSequence_out < ParameterType_Seq> ParameterType_Seq_out;

            class  ParameterType_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ParameterType_TypeSupportInterface_ptr _ptr_type;
                typedef ParameterType_TypeSupportInterface_var _var_type;

                static ParameterType_TypeSupportInterface_ptr _duplicate (ParameterType_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterType_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ParameterType_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterType_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterType_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ParameterType_TypeSupportInterface () {};
                ~ParameterType_TypeSupportInterface () {};
            private:
                ParameterType_TypeSupportInterface (const ParameterType_TypeSupportInterface &);
                ParameterType_TypeSupportInterface & operator = (const ParameterType_TypeSupportInterface &);
            };

            class  ParameterType_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ParameterType_DataWriter_ptr _ptr_type;
                typedef ParameterType_DataWriter_var _var_type;

                static ParameterType_DataWriter_ptr _duplicate (ParameterType_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterType_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ParameterType_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterType_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterType_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ParameterType_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ParameterType_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ParameterType_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ParameterType_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ParameterType_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ParameterType_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ParameterType_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ParameterType_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ParameterType_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ParameterType_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ParameterType_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterType_& instance_data) = 0;

            protected:
                ParameterType_DataWriter () {};
                ~ParameterType_DataWriter () {};
            private:
                ParameterType_DataWriter (const ParameterType_DataWriter &);
                ParameterType_DataWriter & operator = (const ParameterType_DataWriter &);
            };

            class  ParameterType_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ParameterType_DataReader_ptr _ptr_type;
                typedef ParameterType_DataReader_var _var_type;

                static ParameterType_DataReader_ptr _duplicate (ParameterType_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterType_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ParameterType_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterType_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterType_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterType_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterType_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterType_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterType_& instance) = 0;

            protected:
                ParameterType_DataReader () {};
                ~ParameterType_DataReader () {};
            private:
                ParameterType_DataReader (const ParameterType_DataReader &);
                ParameterType_DataReader & operator = (const ParameterType_DataReader &);
            };

            class  ParameterType_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ParameterType_DataReaderView_ptr _ptr_type;
                typedef ParameterType_DataReaderView_var _var_type;

                static ParameterType_DataReaderView_ptr _duplicate (ParameterType_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterType_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ParameterType_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterType_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterType_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterType_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterType_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterType_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterType_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterType_& instance) = 0;

            protected:
                ParameterType_DataReaderView () {};
                ~ParameterType_DataReaderView () {};
            private:
                ParameterType_DataReaderView (const ParameterType_DataReaderView &);
                ParameterType_DataReaderView & operator = (const ParameterType_DataReaderView &);
            };
        }

    }

}

#endif
