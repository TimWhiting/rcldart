#ifndef _H_90598579E4E051313B80C4DB40024093_ParameterValue_DCPS_H_
#define _H_90598579E4E051313B80C4DB40024093_ParameterValue_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ParameterValue_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ParameterValue_TypeSupportInterface;

            typedef ParameterValue_TypeSupportInterface * ParameterValue_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ParameterValue_TypeSupportInterface> ParameterValue_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ParameterValue_TypeSupportInterface> ParameterValue_TypeSupportInterface_out;


            class ParameterValue_DataWriter;

            typedef ParameterValue_DataWriter * ParameterValue_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ParameterValue_DataWriter> ParameterValue_DataWriter_var;
            typedef DDS_DCPSInterface_out < ParameterValue_DataWriter> ParameterValue_DataWriter_out;


            class ParameterValue_DataReader;

            typedef ParameterValue_DataReader * ParameterValue_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ParameterValue_DataReader> ParameterValue_DataReader_var;
            typedef DDS_DCPSInterface_out < ParameterValue_DataReader> ParameterValue_DataReader_out;


            class ParameterValue_DataReaderView;

            typedef ParameterValue_DataReaderView * ParameterValue_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ParameterValue_DataReaderView> ParameterValue_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ParameterValue_DataReaderView> ParameterValue_DataReaderView_out;

            struct ParameterValue_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ParameterValue_, struct ParameterValue_Seq_uniq_> ParameterValue_Seq;
            typedef DDS_DCPSSequence_var < ParameterValue_Seq> ParameterValue_Seq_var;
            typedef DDS_DCPSSequence_out < ParameterValue_Seq> ParameterValue_Seq_out;

            class  ParameterValue_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ParameterValue_TypeSupportInterface_ptr _ptr_type;
                typedef ParameterValue_TypeSupportInterface_var _var_type;

                static ParameterValue_TypeSupportInterface_ptr _duplicate (ParameterValue_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterValue_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ParameterValue_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterValue_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterValue_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ParameterValue_TypeSupportInterface () {};
                ~ParameterValue_TypeSupportInterface () {};
            private:
                ParameterValue_TypeSupportInterface (const ParameterValue_TypeSupportInterface &);
                ParameterValue_TypeSupportInterface & operator = (const ParameterValue_TypeSupportInterface &);
            };

            class  ParameterValue_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ParameterValue_DataWriter_ptr _ptr_type;
                typedef ParameterValue_DataWriter_var _var_type;

                static ParameterValue_DataWriter_ptr _duplicate (ParameterValue_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterValue_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ParameterValue_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterValue_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterValue_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ParameterValue_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ParameterValue_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ParameterValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ParameterValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ParameterValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ParameterValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ParameterValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ParameterValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ParameterValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ParameterValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ParameterValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterValue_& instance_data) = 0;

            protected:
                ParameterValue_DataWriter () {};
                ~ParameterValue_DataWriter () {};
            private:
                ParameterValue_DataWriter (const ParameterValue_DataWriter &);
                ParameterValue_DataWriter & operator = (const ParameterValue_DataWriter &);
            };

            class  ParameterValue_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ParameterValue_DataReader_ptr _ptr_type;
                typedef ParameterValue_DataReader_var _var_type;

                static ParameterValue_DataReader_ptr _duplicate (ParameterValue_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterValue_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ParameterValue_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterValue_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterValue_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterValue_& instance) = 0;

            protected:
                ParameterValue_DataReader () {};
                ~ParameterValue_DataReader () {};
            private:
                ParameterValue_DataReader (const ParameterValue_DataReader &);
                ParameterValue_DataReader & operator = (const ParameterValue_DataReader &);
            };

            class  ParameterValue_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ParameterValue_DataReaderView_ptr _ptr_type;
                typedef ParameterValue_DataReaderView_var _var_type;

                static ParameterValue_DataReaderView_ptr _duplicate (ParameterValue_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterValue_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ParameterValue_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterValue_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterValue_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterValue_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterValue_& instance) = 0;

            protected:
                ParameterValue_DataReaderView () {};
                ~ParameterValue_DataReaderView () {};
            private:
                ParameterValue_DataReaderView (const ParameterValue_DataReaderView &);
                ParameterValue_DataReaderView & operator = (const ParameterValue_DataReaderView &);
            };
        }

    }

}

#endif
